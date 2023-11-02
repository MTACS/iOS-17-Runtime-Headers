
@interface CNLocalizationServices : NSObject <CNLocalizationServices>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultServices;

- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundleForClass:(Class)arg4 comment:(id)arg5;

@end
