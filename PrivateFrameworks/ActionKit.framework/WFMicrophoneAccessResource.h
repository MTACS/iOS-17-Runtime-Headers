
@interface WFMicrophoneAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (id)icon;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)name;
- (id)protectedResourceDescription;
- (unsigned long long)status;

@end
