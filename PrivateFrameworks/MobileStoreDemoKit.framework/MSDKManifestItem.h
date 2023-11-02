
@interface MSDKManifestItem : NSObject {
    MSDKManifestComponent * _component;
}

@property (nonatomic, readonly) MSDKManifestComponent *component;

- (void).cxx_destruct;
- (id)component;
- (id)initWithIdentifier:(id)arg1 andDictionary:(id)arg2 forComponent:(id)arg3;

@end
