
@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig {
    unsigned int  _framerate;
    bool  _isSubStream;
    bool  _isTemporalStream;
    unsigned long long  _keyFrameInterval;
    unsigned short  _parentStreamID;
    NSMutableSet * _payloads;
    long long  _resolution;
    NSMutableArray * _subStreamConfigs;
}

@property (nonatomic) unsigned int framerate;
@property (nonatomic) bool isSubStream;
@property (nonatomic) bool isTemporalStream;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) unsigned short parentStreamID;
@property (nonatomic, readonly) NSSet *payloads;
@property (nonatomic) long long resolution;
@property (nonatomic, readonly) NSArray *subStreamConfigs;

- (void)addPayload:(int)arg1;
- (void)addSubStreamConfig:(id)arg1;
- (void)dealloc;
- (unsigned int)framerate;
- (id)init;
- (bool)isSubStream;
- (bool)isTemporalStream;
- (unsigned long long)keyFrameInterval;
- (unsigned short)parentStreamID;
- (id)payloads;
- (long long)resolution;
- (void)setFramerate:(unsigned int)arg1;
- (void)setIsSubStream:(bool)arg1;
- (void)setIsTemporalStream:(bool)arg1;
- (void)setKeyFrameInterval:(unsigned long long)arg1;
- (void)setParentStreamID:(unsigned short)arg1;
- (void)setResolution:(long long)arg1;
- (id)streamIds;
- (id)subStreamConfigs;

@end
