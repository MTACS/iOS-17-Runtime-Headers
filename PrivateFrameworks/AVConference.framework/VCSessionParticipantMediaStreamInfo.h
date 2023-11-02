
@interface VCSessionParticipantMediaStreamInfo : NSObject {
    bool  _isOneToOneSupported;
    VCMediaStream * _stream;
    NSMutableArray * _streamConfigs;
}

@property (nonatomic, readonly) bool isOneToOneSupported;
@property (nonatomic, retain) VCMediaStream *stream;
@property (nonatomic, readonly) NSArray *streamConfigs;

- (void)addStreamConfig:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isOneToOneSupported;
- (void)setStream:(id)arg1;
- (id)stream;
- (id)streamConfigs;

@end
