
@interface CPLane : NSObject <CPAccNavUpdateProtocol, NSCopying, NSSecureCoding> {
    unsigned short  _index;
    NSMeasurement * _primaryAngle;
    NSArray * _secondaryAngles;
    unsigned char  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short index;
@property (nonatomic, retain) NSMeasurement *primaryAngle;
@property (nonatomic, retain) NSArray *secondaryAngles;
@property (nonatomic) unsigned char status;
@property (readonly) Class superclass;

+ (id)accNavParameterKeysIndexed;
+ (id)accNavParameters;
+ (id)accNavParametersIndexed;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)index;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)primaryAngle;
- (id)secondaryAngles;
- (void)setIndex:(unsigned short)arg1;
- (void)setPrimaryAngle:(id)arg1;
- (void)setSecondaryAngles:(id)arg1;
- (void)setStatus:(unsigned char)arg1;
- (unsigned char)status;

@end
