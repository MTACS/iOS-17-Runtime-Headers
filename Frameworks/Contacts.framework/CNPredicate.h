
@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying> {
    bool  _augmentMainStoreResults;
    NSPredicate * _cn_predicate;
    NSArray * _mainStoreContactIdentifiers;
}

@property (nonatomic) bool augmentMainStoreResults;
@property (nonatomic, readonly) bool cn_hasHighSpecificity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *mainStoreContactIdentifiers;
@property (readonly) Class superclass;

+ (id)os_log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cn_acceptVisitor:(id)arg1;
- (bool)augmentMainStoreResults;
- (bool)cn_hasHighSpecificity;
- (id)cn_predicate;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)arg1;
- (void)cn_triageWithLog:(id)arg1 serialNumber:(unsigned long long)arg2;
- (id)contactsFromDonationStore:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)mainStoreContactIdentifiers;
- (void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(bool)arg2;
- (id)predicateFormat;
- (void)setAugmentMainStoreResults:(bool)arg1;
- (void)setMainStoreContactIdentifiers:(id)arg1;
- (id)shortDebugDescription;

@end
