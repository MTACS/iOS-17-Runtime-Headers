
@interface REMAccountSortDescriptor : NSObject <NSSecureCoding> {
    bool  _ascending;
    long long  _type;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (bool)ascending;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(bool)arg2;
- (long long)type;

@end
