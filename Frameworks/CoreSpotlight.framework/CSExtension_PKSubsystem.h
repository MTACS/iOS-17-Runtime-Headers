
@interface CSExtension_PKSubsystem : NSObject <PKModularService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedInstance;

- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (void)endUsing:(id)arg1;
- (id)principleClassFromDictionary:(id)arg1;

@end
