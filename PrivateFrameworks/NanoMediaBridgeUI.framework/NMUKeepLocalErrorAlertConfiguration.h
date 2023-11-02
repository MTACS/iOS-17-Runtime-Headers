
@interface NMUKeepLocalErrorAlertConfiguration : NMUKeepLocalAlertConfiguration {
    unsigned long long  _reason;
}

@property (nonatomic) unsigned long long reason;

- (id)_downloadOnPowerActionWithOptions:(id)arg1;
- (void)_setGenericErrorWithOKAction;
- (id)initWithItemName:(id)arg1 error:(id)arg2 options:(id)arg3;
- (id)initWithModelObject:(id)arg1 error:(id)arg2 options:(id)arg3;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;

@end
