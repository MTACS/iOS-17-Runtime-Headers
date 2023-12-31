
@interface HMUserPresenceAuthorization : NSObject {
    unsigned long long  _value;
}

@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) unsigned long long value;

+ (id)authWithCoder:(id)arg1;
+ (id)authWithDict:(id)arg1;
+ (id)authWithMessage:(id)arg1;
+ (id)authWithNumber:(id)arg1;
+ (id)authWithValue:(unsigned long long)arg1;

- (void)addToCoder:(id)arg1;
- (void)addToPayload:(id)arg1;
- (id)description;
- (id)initWithNumber:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)number;
- (unsigned long long)value;

@end
