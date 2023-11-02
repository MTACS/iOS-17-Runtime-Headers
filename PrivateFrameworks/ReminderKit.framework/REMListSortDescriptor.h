
@interface REMListSortDescriptor : NSObject <NSSecureCoding> {
    bool  _ascending;
    long long  _type;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) long long type;

+ (id)sortDescriptorSortingByNameAscending:(bool)arg1;
+ (id)sortDescriptorSortingByOrderingInAccountAscending:(bool)arg1;
+ (bool)supportsSecureCoding;

- (bool)ascending;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
