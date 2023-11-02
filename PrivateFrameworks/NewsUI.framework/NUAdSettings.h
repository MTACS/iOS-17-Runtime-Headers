
@interface NUAdSettings : NSObject <NUAdSettings> {
    <SXAdvertisingSettings> * _debugAdvertisementSettings;
}

@property (nonatomic, readonly) <SXAdvertisingSettings> *debugAdvertisementSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugAdvertisementSettings;
- (id)initWithDebugAdvertisementSettings:(id)arg1;

@end
