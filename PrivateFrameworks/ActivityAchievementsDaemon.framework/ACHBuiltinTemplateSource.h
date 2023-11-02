
@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateAssetSource, ACHTemplateSource>

@property (nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long runCadence;
@property (readonly) Class superclass;

- (id)identifier;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (long long)runCadence;
- (bool)sourceShouldRunForDate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(id /* block */)arg2;

@end
