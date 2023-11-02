
@interface MPSectionedIdentifierListPosition : NSObject <NSSecureCoding> {
    long long  _entryType;
    NSString * _itemIdentifier;
    NSString * _sectionIdentifier;
}

@property (nonatomic, readonly) long long entryType;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *sectionIdentifier;

+ (id)positionForHeadOfSection:(id)arg1;
+ (id)positionForItem:(id)arg1 inSection:(id)arg2;
+ (id)positionForTailOfSection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)entryType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;
- (id)sectionIdentifier;

@end
