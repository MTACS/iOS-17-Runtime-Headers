
@interface BLSHDisableFlipbookPowerSavingAttribute : BLSAttribute {
    unsigned long long  _reason;
}

@property (nonatomic, readonly) unsigned long long reason;

+ (id)disablePowerSavingForReason:(unsigned long long)arg1;

- (bool)checkEntitlementSourceForRequiredEntitlements:(id)arg1 error:(out id*)arg2;
- (unsigned long long)reason;

@end
