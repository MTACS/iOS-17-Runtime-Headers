
@interface CWFRangingResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _MACAddress;
    double  _distance;
    NSData * _identifier;
    NSArray * _measurements;
    unsigned long long  _numberOfValidMeasurements;
    double  _standardDeviation;
    int  _status;
}

@property (nonatomic, copy) NSString *MACAddress;
@property (nonatomic) double distance;
@property (nonatomic, copy) NSData *identifier;
@property (nonatomic, copy) NSArray *measurements;
@property (nonatomic) unsigned long long numberOfValidMeasurements;
@property (nonatomic) double standardDeviation;
@property (nonatomic) int status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MACAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRangingResult:(id)arg1;
- (id)measurements;
- (unsigned long long)numberOfValidMeasurements;
- (void)setDistance:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMACAddress:(id)arg1;
- (void)setMeasurements:(id)arg1;
- (void)setNumberOfValidMeasurements:(unsigned long long)arg1;
- (void)setStandardDeviation:(double)arg1;
- (void)setStatus:(int)arg1;
- (double)standardDeviation;
- (int)status;

@end
