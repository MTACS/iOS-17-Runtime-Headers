
@interface ATXApp2VecMapping : NSObject {
    NSData * _data;
    const unsigned short * _endOfMatrix;
    struct header_s { 
        unsigned int nvectors; 
        unsigned int length; 
        struct fixpt_meta_s { 
            float base; 
            float incr; 
        } fixinfo; 
    }  _hdr;
    struct _CFBurstTrie { } * _idxForBundleId;
    const unsigned short * _matrix;
}

@property (nonatomic, readonly) unsigned long long appCount;
@property (nonatomic, readonly) unsigned long long vectorLength;

- (void).cxx_destruct;
- (unsigned long long)appCount;
- (void)dealloc;
- (bool)getVectorForBundleId:(id)arg1 into:(float*)arg2;
- (bool)getVectorForBundleIdWithGenreBackup:(id)arg1 into:(float*)arg2;
- (id)init;
- (id)initWithPath:(id)arg1;
- (unsigned long long)vectorLength;

@end
