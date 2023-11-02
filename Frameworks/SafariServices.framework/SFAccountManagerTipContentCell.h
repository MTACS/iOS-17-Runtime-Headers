
@interface SFAccountManagerTipContentCell : SFAccountManagerPlatterWithDeclineButtonCell {
    long long  _tipType;
}

@property (nonatomic, readonly) long long tipType;

+ (unsigned long long)contentInset;

- (void)configureForTip:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)tipType;

@end
