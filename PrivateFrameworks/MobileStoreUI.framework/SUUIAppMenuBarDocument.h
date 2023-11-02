
@interface SUUIAppMenuBarDocument : IKAppMenuBarDocument <SUUIDOMFeature>

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureName;

@end
