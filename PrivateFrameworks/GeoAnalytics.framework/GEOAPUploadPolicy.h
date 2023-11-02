
@interface GEOAPUploadPolicy : NSObject {
    bool  _sendImmediately;
    double  _ttl;
    int  _type;
    NSArray * _uploadStages;
}

@property (nonatomic) bool sendImmediately;
@property (nonatomic) double ttl;
@property (nonatomic) int type;
@property (nonatomic, retain) NSArray *uploadStages;

- (void).cxx_destruct;
- (bool)sendImmediately;
- (void)setSendImmediately:(bool)arg1;
- (void)setTtl:(double)arg1;
- (void)setType:(int)arg1;
- (void)setUploadStages:(id)arg1;
- (double)ttl;
- (int)type;
- (id)uploadStages;

@end
