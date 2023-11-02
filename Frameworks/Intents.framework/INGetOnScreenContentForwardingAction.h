
@interface INGetOnScreenContentForwardingAction : INIntentForwardingAction {
    NSString * _sceneIdentifier;
    WFOnScreenContentServiceOptions * _serviceOptions;
}

@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (nonatomic, readonly) WFOnScreenContentServiceOptions *serviceOptions;

+ (Class)responseClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 serviceOptions:(id)arg2;
- (id)sceneIdentifier;
- (id)serviceOptions;

@end
