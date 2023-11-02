
@interface HKElectrocardiogramRegulatedVersion : NSObject {
    NSString * _featureVersion;
    NSString * _updateVersion;
}

@property (nonatomic, readonly, copy) NSString *featureVersion;
@property (nonatomic, readonly, copy) NSString *updateVersion;

- (void).cxx_destruct;
- (id)_featureVersionFromUpdateVersion:(id)arg1;
- (id)_updateVersionFromSourceVersion:(id)arg1 algorithmVersion:(long long)arg2;
- (bool)_validateSourceVersion:(id)arg1 algorithmVersion:(long long)arg2;
- (id)featureVersion;
- (id)initWithSourceVersion:(id)arg1 algorithmVersion:(long long)arg2;
- (id)updateVersion;

@end
