
@interface PKWorldRegion : NSObject <NSSecureCoding> {
    NSString * _abbreviationCode;
    NSString * _identifier;
    double  _latitude;
    double  _latitudeDelta;
    NSString * _localeIdentifier;
    NSString * _localizedName;
    double  _longitude;
    double  _longitudeDelta;
    unsigned long long  _muid;
    PKWorldRegion * _parentRegion;
    int  _resultProviderIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSString *abbreviationCode;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } displayRegion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) PKWorldRegion *parentRegion;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic) unsigned long long type;

+ (unsigned long long)mostConstrainingTypeInRegions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abbreviationCode;
- (id)description;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })displayRegion;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWorldRegion:(id)arg1;
- (bool)isIncludedInRegions:(id)arg1;
- (id)localeIdentifier;
- (id)localizedName;
- (unsigned long long)muid;
- (id)parentRegion;
- (id)regionOfType:(unsigned long long)arg1;
- (int)resultProviderIdentifier;
- (id)searchString;
- (void)setAbbreviationCode:(id)arg1;
- (void)setDisplayRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setParentRegion:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
