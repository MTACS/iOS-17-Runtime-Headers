
@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localExtensionIdentifier;
@property (readonly) Class superclass;

+ (id)localIntentHandlerLaunchID;
+ (id)sharedInstance;

- (id)handlerForIntent:(id)arg1;
- (id)init;
- (id)localExtensionIdentifier;

@end
