
@interface VCPVNImageprintWrapper : NSObject {
    NSData * _data;
    unsigned long long  _type;
    int  _version;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) int version;

+ (id)generateVNImageprintWithType:(unsigned long long)arg1 archiveData:(id)arg2 andError:(id*)arg3;
+ (id)wrapperWithImageprintType:(unsigned long long)arg1 version:(int)arg2 andData:(id)arg3;

- (void).cxx_destruct;
- (bool)calculateDistance:(float*)arg1 toWrapper:(id)arg2 andError:(id*)arg3;
- (id)data;
- (id)description;
- (id)initWithImageprintType:(unsigned long long)arg1 version:(int)arg2 andData:(id)arg3;
- (unsigned long long)type;
- (int)version;

@end
