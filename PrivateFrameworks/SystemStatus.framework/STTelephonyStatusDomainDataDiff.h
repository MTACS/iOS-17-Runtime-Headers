
@interface STTelephonyStatusDomainDataDiff : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDiff> {
    STTelephonyStatusDomainSIMInfoDiff * _SIMOneInfoDiff;
    STTelephonyStatusDomainSIMInfoDiff * _SIMTwoInfoDiff;
    BSSettings * _changes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)diffFromData:(id)arg1 toData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToMutableData:(id)arg1;
- (id)dataByApplyingToData:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
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
