
@interface SXConditionValidationContextFactory : NSObject <SXConditionValidationContextFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createContextWithLayoutOptions:(id)arg1;

@end
