
@protocol VCCaptionsSource <NSObject>

@required

- (bool)captionsEnabled;
- (bool)captionsSupported;
- (void)enableCaptions:(bool)arg1;
- (void)registerCaptionsEventDelegate:(id <VCCaptionsSourceDelegate>)arg1;
- (void)setCaptionsLocale:(NSLocale *)arg1;

@end
