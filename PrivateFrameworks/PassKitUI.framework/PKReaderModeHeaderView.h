
@interface PKReaderModeHeaderView : PKTableHeaderView {
    long long  _context;
    PKPaymentSetupProduct * _product;
    NSDictionary * _readerModeResources;
    NSArray * _resourceKeys;
    unsigned long long  _state;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_configureForCurrentState;
- (id)_subtitleForState:(unsigned long long)arg1;
- (id)_titleForState:(unsigned long long)arg1;
- (id)initWithState:(unsigned long long)arg1 context:(long long)arg2 product:(id)arg3;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
