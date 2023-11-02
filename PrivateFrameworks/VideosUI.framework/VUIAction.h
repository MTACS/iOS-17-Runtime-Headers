
@interface VUIAction : NSObject <VUIAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)actionWithDictionary:(id)arg1 appContext:(id)arg2;

- (bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;

@end
