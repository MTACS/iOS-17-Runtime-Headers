
@interface SiriVirtualDeviceResolution.CapabilityDescription : NSObject <NSCopying, NSSecureCoding> {
    void key;
    void valueRange;
    void valueSet;
}

@property (nonatomic, readonly) NSString *capabilityKey;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSNumber *valueRangeLowerBound;
@property (nonatomic, readonly) NSNumber *valueRangeUpperBound;
@property (nonatomic, readonly) NSSet *valueSet;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capabilityKey;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 lowerbound:(double)arg2 upperbound:(double)arg3;
- (id)initWithKey:(id)arg1 valueSet:(id)arg2;
- (id)key;
- (id)valueRangeLowerBound;
- (id)valueRangeUpperBound;
- (id)valueSet;

@end
