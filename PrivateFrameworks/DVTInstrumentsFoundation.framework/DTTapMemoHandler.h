
@interface DTTapMemoHandler : NSObject {
    DTTapConfig * _config;
    <DTTapMemoHandlerDelegate> * _delegate;
    bool  _sentRecordingInfo;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly, retain) DTTapConfig *config;

- (void).cxx_destruct;
- (id)config;
- (id)handleMemo:(id)arg1;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;
- (void)resume;
- (void)suspend;

@end
