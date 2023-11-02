
@interface PKPaymentPreferenceCell : PKTableViewCell {
    UIColor * _errorColor;
    bool  _hasError;
}

@property (nonatomic) bool hasError;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)hasError;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setHasError:(bool)arg1;

@end
