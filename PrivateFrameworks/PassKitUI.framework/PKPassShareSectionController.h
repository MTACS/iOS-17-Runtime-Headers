
@interface PKPassShareSectionController : PKPaymentSetupListSectionController {
    bool  _useCompactInsets;
}

@property (nonatomic) bool useCompactInsets;

- (id)initWithIdentifiers:(id)arg1;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setUseCompactInsets:(bool)arg1;
- (bool)useCompactInsets;

@end
