
@interface MSDKManifestDataItem : MSDKManifestItem {
    NSDictionary * _data;
}

@property (nonatomic, readonly) NSDictionary *data;

- (void).cxx_destruct;
- (id)data;
- (id)initWithIdentifier:(id)arg1 andDictionary:(id)arg2 forComponent:(id)arg3;

@end
