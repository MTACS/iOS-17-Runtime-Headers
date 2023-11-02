
@interface PXStoryCurationChangeList : NSObject {
    NSSet * _demotedIdentifiers;
    bool  _hasAnyChange;
    NSSet * _promotedIdentifiers;
}

@property (nonatomic, readonly) NSSet *demotedIdentifiers;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) bool hasAnyChange;
@property (nonatomic, readonly) NSSet *promotedIdentifiers;

+ (id)changeListByCombiningChangeList:(id)arg1 withChangeList:(id)arg2;

- (void).cxx_destruct;
- (id)changeListByApplyingChangeList:(id)arg1;
- (id)changeListByDemotingIdentifiers:(id)arg1;
- (id)changeListByPromotingIdentifiers:(id)arg1;
- (id)demotedIdentifiers;
- (id)description;
- (id)diagnosticDescription;
- (bool)hasAnyChange;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPromotedIdentifiers:(id)arg1 demotedIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)promotedIdentifiers;

@end
