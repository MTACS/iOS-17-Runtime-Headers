
@interface HFAnalyticsWalletKeyExpressModeEvent : HFAnalyticsEvent {
    NSNumber * _expressModeLocationNumber;
    NSNumber * _expressModeSelectionNumber;
}

@property (nonatomic, retain) NSNumber *expressModeLocationNumber;
@property (nonatomic, retain) NSNumber *expressModeSelectionNumber;

- (void).cxx_destruct;
- (id)expressModeLocationNumber;
- (id)expressModeSelectionNumber;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setExpressModeLocationNumber:(id)arg1;
- (void)setExpressModeSelectionNumber:(id)arg1;

@end
