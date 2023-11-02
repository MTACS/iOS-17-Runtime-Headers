
@interface ICRadioStationProviderResource : NSObject {
    NSString * _bundleIdentifier;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithRadioStationProviderResourceDictionary:(id)arg1;
- (id)url;

@end
