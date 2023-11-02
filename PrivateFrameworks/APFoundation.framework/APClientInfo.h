
@interface APClientInfo : NSObject <NSSecureCoding> {
    NSString * _appVersion;
    long long  _interfaceIdiom;
    bool  _isLocationAvailableForAd;
    NSArray * _keyboards;
    APLocationInfo * _locationInfo;
    long long  _orientation;
    NSNumber * _scale;
    long long  _screenHeight;
    long long  _screenWidth;
}

@property (retain) NSString *appVersion;
@property long long interfaceIdiom;
@property (nonatomic) bool isLocationAvailableForAd;
@property (retain) NSArray *keyboards;
@property (retain) APLocationInfo *locationInfo;
@property long long orientation;
@property (retain) NSNumber *scale;
@property long long screenHeight;
@property long long screenWidth;

+ (id)activeClientInfo;
+ (id)delegate;
+ (void)setActiveClientInfo:(id)arg1;
+ (void)setDelegate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interfaceIdiom;
- (bool)isLocationAvailableForAd;
- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;
- (id)keyboards;
- (id)locationInfo;
- (id)nonUICopy;
- (long long)orientation;
- (id)redactedDescription;
- (id)scale;
- (long long)screenHeight;
- (long long)screenWidth;
- (void)setAppVersion:(id)arg1;
- (void)setInterfaceIdiom:(long long)arg1;
- (void)setIsLocationAvailableForAd:(bool)arg1;
- (void)setKeyboards:(id)arg1;
- (void)setLocationInfo:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setScale:(id)arg1;
- (void)setScreenHeight:(long long)arg1;
- (void)setScreenWidth:(long long)arg1;
- (void)updateActiveClientInfo;

@end
