
@interface SUCorePowerAssertion : NSObject <NSSecureCoding> {
    int  _activeAssertionCount;
    unsigned int  _assertionID;
}

@property (nonatomic) int activeAssertionCount;
@property (nonatomic) unsigned int assertionID;

+ (bool)supportsSecureCoding;

- (int)activeAssertionCount;
- (unsigned int)assertionID;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActiveAssertionCount:(int)arg1;
- (void)setAssertionID:(unsigned int)arg1;
- (id)summary;

@end
