
@interface MUPlaceActionControlledItemViewModel : MUActionRowItemViewModel {
    _MKPlaceActionButtonController * _actionButtonController;
}

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)analyticsButtonValues;
- (id)initWithPlaceActionController:(id)arg1;
- (bool)isEnabled;
- (void)performWithPresentationOptions:(id)arg1;
- (id)symbolName;
- (id)titleText;

@end
