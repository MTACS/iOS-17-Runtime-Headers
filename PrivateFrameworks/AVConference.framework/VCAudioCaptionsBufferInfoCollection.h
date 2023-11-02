
@interface VCAudioCaptionsBufferInfoCollection : NSObject {
    NSMutableArray * _bufferInfos;
    double  _bufferLength;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly) NSArray *streamTokens;

- (void)dealloc;
- (id)description;
- (id)initWithBufferLength:(double)arg1;
- (id)streamTokens;

@end
