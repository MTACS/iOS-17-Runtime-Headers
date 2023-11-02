
@interface PKPaymentSetupProductRegionData : NSObject <NSCopying> {
    NSArray * _exclusionaryZones;
    NSArray * _inclusionaryZones;
    double  _maximumMatchingDistance;
    bool  _persistent;
    unsigned long long  _priority;
}

@property (nonatomic, readonly, copy) NSArray *exclusionaryZones;
@property (nonatomic, readonly, copy) NSArray *inclusionaryZones;
@property (nonatomic, readonly) double maximumMatchingDistance;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (nonatomic, readonly) unsigned long long priority;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_boundaryDataFromList:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exclusionaryZones;
- (id)inclusionaryZones;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegionDataDictionary:(id)arg1;
- (bool)isPersistent;
- (double)maximumMatchingDistance;
- (unsigned long long)priority;

@end
