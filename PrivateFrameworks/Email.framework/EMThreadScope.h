
@interface EMThreadScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    NSPredicate * _filterPredicate;
    EMMailboxScope * _mailboxScope;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedSelf;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)filterPredicate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxScope:(id)arg1 filterPredicate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mailboxScope;

@end
