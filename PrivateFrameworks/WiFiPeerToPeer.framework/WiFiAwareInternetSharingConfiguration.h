
@interface WiFiAwareInternetSharingConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _automatic;
    NSString * _interfaceName;
    bool  _provider;
    bool  _useBridging;
}

@property (nonatomic) bool automatic;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic) bool provider;
@property (nonatomic) bool useBridging;

+ (id)automaticallyProvideInternetToResponders;
+ (id)automaticallyRequestInternetFromInitiators;
+ (id)provideInternetToInitiatorsFromInterface:(id)arg1;
+ (id)requestInterentFromResponder;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)automatic;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterfaceName:(id)arg1 isProvider:(bool)arg2 isAutomatic:(bool)arg3;
- (id)interfaceName;
- (bool)interfaceNameEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)provider;
- (void)setAutomatic:(bool)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setProvider:(bool)arg1;
- (void)setUseBridging:(bool)arg1;
- (bool)useBridging;

@end
