
@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane {
    UILabel * _infoLabel;
    unsigned long long  _internalInfoLabelType;
    double  _marginInset;
}

@property (nonatomic, readonly) UILabel *infoLabel;
@property (nonatomic) unsigned long long infoLabelType;
@property (nonatomic) unsigned long long internalInfoLabelType;
@property (nonatomic) double marginInset;
@property (nonatomic, copy) NSString *string;

- (void).cxx_destruct;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (id)infoLabel;
- (unsigned long long)infoLabelType;
- (id)infoLabelWithString:(id)arg1;
- (id)initWithString:(id)arg1;
- (unsigned long long)internalInfoLabelType;
- (double)marginInset;
- (void)setInfoLabelType:(unsigned long long)arg1;
- (void)setInternalInfoLabelType:(unsigned long long)arg1;
- (void)setLabel:(id)arg1 toInfoLabelType:(unsigned long long)arg2;
- (void)setLabelColor:(id)arg1;
- (void)setMarginInset:(double)arg1;
- (void)setString:(id)arg1;
- (void)setString:(id)arg1 animated:(bool)arg2;
- (id)string;

@end
