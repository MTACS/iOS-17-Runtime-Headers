
@interface IMTypingIndicatorPipelineParameter : IMTextMessagePipelineParameter {
    NSString * _balloonPluginBundleID;
    bool  _isFinished;
    NSData * _typingIndicatorIconData;
}

@property (nonatomic, copy) NSString *balloonPluginBundleID;
@property (nonatomic) bool isFinished;
@property (nonatomic, copy) NSData *typingIndicatorIconData;

- (void).cxx_destruct;
- (id)balloonPluginBundleID;
- (id)initWithBD:(id)arg1 idsTrustedData:(id)arg2;
- (id)initWithBDBasic:(id)arg1 idsTrustedData:(id)arg2;
- (bool)isFinished;
- (void)setBalloonPluginBundleID:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setTypingIndicatorIconData:(id)arg1;
- (id)typingIndicatorIconData;

@end
