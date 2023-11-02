
@interface MBCellularAccess : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsConstrainedNetworkAccess;
    bool  _allowsExpensiveNetworkAccess;
}

@property (nonatomic) bool allowsConstrainedNetworkAccess;
@property (nonatomic) bool allowsExpensiveNetworkAccess;

+ (id)expensiveCellularAccess;
+ (id)inexpensiveCellularAccess;
+ (bool)supportsSecureCoding;

- (bool)allowsConstrainedNetworkAccess;
- (bool)allowsExpensiveNetworkAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllowsConstrainedNetworkAccess:(bool)arg1;
- (void)setAllowsExpensiveNetworkAccess:(bool)arg1;

@end
