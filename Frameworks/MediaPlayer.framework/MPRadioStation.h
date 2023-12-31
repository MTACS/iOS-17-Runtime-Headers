
@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizedDescription;
    NSString * _localizedName;
    NSString * _stationStringID;
    long long  _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic) long long uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelStation:(id)arg1;
- (id)initWithPlayParameters:(id)arg1;
- (id)initWithStation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedName;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setUniqueIdentifier:(long long)arg1;
- (id)stationStringID;
- (long long)uniqueIdentifier;

@end
