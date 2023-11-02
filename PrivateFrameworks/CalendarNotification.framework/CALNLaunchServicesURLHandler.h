
@interface CALNLaunchServicesURLHandler : NSObject <CALNURLHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_openApplicationOptionsForResponse:(id)arg1;
+ (id)sharedInstance;

- (void)openURL:(id)arg1 response:(id)arg2;

@end
