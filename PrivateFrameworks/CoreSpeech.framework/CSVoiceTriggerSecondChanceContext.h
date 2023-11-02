
@interface CSVoiceTriggerSecondChanceContext : NSObject {
    unsigned long long  _secondChanceHotTillMachTime;
}

@property (nonatomic) unsigned long long secondChanceHotTillMachTime;

- (id)initWithWindowStartTime:(unsigned long long)arg1;
- (unsigned long long)secondChanceHotTillMachTime;
- (void)setSecondChanceHotTillMachTime:(unsigned long long)arg1;
- (bool)shouldRunAsSecondChance;

@end
