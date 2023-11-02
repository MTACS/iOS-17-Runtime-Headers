
@interface REMDueDateDeltaInterval : NSObject <NSSecureCoding> {
    long long  _count;
    long long  _unit;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) long long unit;

+ (bool)supportsSecureCoding;

- (id)addedTo:(id)arg1;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnit:(long long)arg1 count:(long long)arg2;
- (id)initWithUnitInteger:(long long)arg1 count:(long long)arg2;
- (id)inverted;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (long long)unit;

@end
