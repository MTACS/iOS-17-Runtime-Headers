
@interface SAUIPreferredLayoutModeAssertion : SAAssertion <SAUILayoutModePreferring> {
    SAUILayoutModePreference * _layoutModePreference;
    <SAElement> * _representedElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutModeChangeReason;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (nonatomic, readonly) <SAElement> *representedElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (id)initWithRepresentedElement:(id)arg1 layoutModePreference:(id)arg2;
- (id)initWithRepresentedElement:(id)arg1 preferredLayoutMode:(long long)arg2 reason:(long long)arg3;
- (long long)layoutModeChangeReason;
- (long long)preferredLayoutMode;
- (id)representedElement;

@end
