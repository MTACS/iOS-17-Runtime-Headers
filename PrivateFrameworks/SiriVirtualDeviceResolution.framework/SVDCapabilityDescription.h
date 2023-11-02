
@interface SVDCapabilityDescription : NSObject <NSSecureCoding> {
    _TtC27SiriVirtualDeviceResolution21CapabilityDescription * _backing;
}

@property (nonatomic, readonly) NSString *capabilityKey;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSNumber *valueRangeLowerBound;
@property (nonatomic, readonly) NSNumber *valueRangeUpperBound;
@property (nonatomic, readonly) NSSet *valueSet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capabilityKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBacking:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 valueRangeWithLowerBound:(double)arg2 upperBound:(double)arg3;
- (id)initWithKey:(id)arg1 valueSet:(id)arg2;
- (id)key;
- (id)valueRangeLowerBound;
- (id)valueRangeUpperBound;
- (id)valueSet;

@end
