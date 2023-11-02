
@interface PKTransitCommutePlanPackage : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _commutePlanLookupDictionary;
    unsigned long long  _transitCommutePlanType;
    NSArray * _transitCommutePlans;
}

@property (nonatomic, retain) NSMutableDictionary *commutePlanLookupDictionary;
@property (nonatomic) unsigned long long transitCommutePlanType;
@property (nonatomic, copy) NSArray *transitCommutePlans;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commutePlanLookupDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 backFieldBuckets:(id)arg2 bundle:(id)arg3 privateBundle:(id)arg4 passType:(unsigned long long)arg5;
- (id)planForIdentifier:(id)arg1;
- (void)setCommutePlanLookupDictionary:(id)arg1;
- (void)setTransitCommutePlanType:(unsigned long long)arg1;
- (void)setTransitCommutePlans:(id)arg1;
- (unsigned long long)transitCommutePlanType;
- (id)transitCommutePlans;

@end
