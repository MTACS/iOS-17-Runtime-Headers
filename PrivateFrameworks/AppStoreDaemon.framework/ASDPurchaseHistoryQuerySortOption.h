
@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding> {
    bool  _ascending;
    NSString * _name;
}

@property (readonly) bool ascending;
@property (readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 ascending:(bool)arg2;
- (id)name;

@end
