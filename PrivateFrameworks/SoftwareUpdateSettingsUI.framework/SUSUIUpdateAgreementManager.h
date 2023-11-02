
@interface SUSUIUpdateAgreementManager : NSObject {
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSMutableDictionary * _updateAgreementDict;
}

- (void).cxx_destruct;
- (id)_queue_agreementDictForDescriptor:(id)arg1;
- (int)_queue_agreementDictValueForKey:(id)arg1 forDescriptor:(id)arg2;
- (void)_queue_setAgreementDictValue:(int)arg1 forKey:(id)arg2 forDescriptor:(id)arg3;
- (int)cellularFeeAgreementStatusForUpdate:(id)arg1;
- (id)init;
- (void)setCellularFeeAgreementStatus:(int)arg1 forUpdate:(id)arg2;
- (void)setTermsAgreementStatus:(int)arg1 forUpdate:(id)arg2;
- (int)termsAgreementStatusForUpdate:(id)arg1;

@end
