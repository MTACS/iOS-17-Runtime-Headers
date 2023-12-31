
@interface HMUserPresenceCompute : NSObject {
    unsigned long long  _value;
}

@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) unsigned long long value;

+ (id)computeWithCoder:(id)arg1;
+ (id)computeWithDict:(id)arg1;
+ (id)computeWithMessage:(id)arg1;
+ (id)computeWithNumber:(id)arg1;
+ (id)computeWithValue:(unsigned long long)arg1;

- (void)addToCoder:(id)arg1;
- (void)addToPayload:(id)arg1;
- (id)description;
- (id)initWithNumber:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)number;
- (unsigned long long)value;

@end
