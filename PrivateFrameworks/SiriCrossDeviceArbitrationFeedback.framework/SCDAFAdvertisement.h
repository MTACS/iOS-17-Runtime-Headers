
@interface SCDAFAdvertisement : NSObject <NSSecureCoding> {
    NSNumber * _advertHash;
    unsigned long long  _confidence;
    unsigned long long  _deviceClass;
    unsigned long long  _deviceGroup;
    unsigned long long  _goodnessScore;
    NSString * _identifier;
    unsigned long long  _productType;
    unsigned long long  _tieBreaker;
}

@property (nonatomic, retain) NSNumber *advertHash;
@property (nonatomic) unsigned long long confidence;
@property (nonatomic) unsigned long long deviceClass;
@property (nonatomic) unsigned long long deviceGroup;
@property (nonatomic) unsigned long long goodnessScore;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) unsigned long long tieBreaker;

+ (id)advertisementsArrayWithDictionaryRepresentation:(id)arg1;
+ (id)arrayDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertHash;
- (unsigned long long)confidence;
- (unsigned long long)deviceClass;
- (unsigned long long)deviceGroup;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)goodnessScore;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)productType;
- (void)setAdvertHash:(id)arg1;
- (void)setConfidence:(unsigned long long)arg1;
- (void)setDeviceClass:(unsigned long long)arg1;
- (void)setDeviceGroup:(unsigned long long)arg1;
- (void)setDeviceGroupWithNumber:(id)arg1;
- (void)setGoodnessScore:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProductType:(unsigned long long)arg1;
- (void)setTieBreaker:(unsigned long long)arg1;
- (unsigned long long)tieBreaker;

@end
