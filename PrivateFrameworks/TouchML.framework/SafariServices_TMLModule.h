
@interface SafariServices_TMLModule : NSObject <TMLModule>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)defineConstants:(id)arg1;
+ (void)initializeJSContext:(id)arg1;
+ (bool)loadModule;

@end
