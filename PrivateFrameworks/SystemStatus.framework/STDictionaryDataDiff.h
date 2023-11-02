
@interface STDictionaryDataDiff : NSObject <BSDescriptionProviding, NSCopying, STStatusDomainDataDiff> {
    STDictionaryData * _objectsAndKeysAdded;
    STDictionaryData * _objectsAndKeysRemoved;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)diffFromDictionaryData:(id)arg1 toDictionaryData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToMutableDictionaryData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionaryDataByApplyingToDictionaryData:(id)arg1;
- (id)diffByApplyingDiff:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isOrthogonalToDiff:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
