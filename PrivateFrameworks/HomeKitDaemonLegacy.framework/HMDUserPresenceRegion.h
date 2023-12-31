
@interface HMDUserPresenceRegion : NSObject {
    unsigned long long  _value;
}

@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) unsigned long long value;

+ (id)regionWithCoder:(id)arg1;
+ (id)regionWithDict:(id)arg1;
+ (id)regionWithMessage:(id)arg1;
+ (id)regionWithNumber:(id)arg1;
+ (id)regionWithValue:(unsigned long long)arg1;

- (void)addToCoder:(id)arg1;
- (void)addToPayload:(id)arg1;
- (id)description;
- (id)initWithNumber:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)number;
- (unsigned long long)value;

@end
