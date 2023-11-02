
@interface APWebViewConfiguration : NSObject {
    WKWebViewConfiguration * _videoConfiguration;
    APUnfairLock * _videoConfigurationLock;
    WKWebViewConfiguration * _videoConfigurationWithBackgroundPriority;
    APUnfairLock * _videoConfigurationWithBackgroundPriorityLock;
    WKWebViewConfiguration * _webProcessConfiguration;
    APUnfairLock * _webProcessConfigurationLock;
    WKWebViewConfiguration * _webProcessConfigurationWithBackgroundPriority;
    APUnfairLock * _webProcessConfigurationWithBackgroundPriorityLock;
}

@property (nonatomic, readonly) WKWebViewConfiguration *videoConfiguration;
@property (nonatomic, readonly) APUnfairLock *videoConfigurationLock;
@property (nonatomic, readonly) WKWebViewConfiguration *videoConfigurationWithBackgroundPriority;
@property (nonatomic, readonly) APUnfairLock *videoConfigurationWithBackgroundPriorityLock;
@property (nonatomic, readonly) WKWebViewConfiguration *webProcessConfiguration;
@property (nonatomic, readonly) APUnfairLock *webProcessConfigurationLock;
@property (nonatomic, readonly) WKWebViewConfiguration *webProcessConfigurationWithBackgroundPriority;
@property (nonatomic, readonly) APUnfairLock *webProcessConfigurationWithBackgroundPriorityLock;

- (void).cxx_destruct;
- (id)_injectionScriptForResource:(id)arg1 injectionTime:(long long)arg2;
- (id)_injectionStyleForResource:(id)arg1;
- (id)_newProcessPoolWithBackgroundPriority:(bool)arg1;
- (id)_newSharedConfigurationWithBackgroundPriority:(bool)arg1;
- (id)init;
- (id)videoConfiguration;
- (id)videoConfigurationLock;
- (id)videoConfigurationWithBackgroundPriority;
- (id)videoConfigurationWithBackgroundPriorityLock;
- (id)webProcessConfiguration;
- (id)webProcessConfigurationLock;
- (id)webProcessConfigurationWithBackgroundPriority;
- (id)webProcessConfigurationWithBackgroundPriorityLock;

@end
