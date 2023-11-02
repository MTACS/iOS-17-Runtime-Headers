
@interface SWWebView : WKWebView {
    UIView * _accessoryView;
    UITextInputTraits * _overridenTraits;
    NSArray * _removedMenuIdentifiers;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) UITextInputTraits *overridenTraits;
@property (nonatomic, copy) NSArray *removedMenuIdentifiers;

- (void).cxx_destruct;
- (id)_textInputTraits;
- (id)accessoryView;
- (id)inputAccessoryView;
- (id)overridenTraits;
- (void)removeMenusForIdentifiers:(id)arg1;
- (id)removedMenuIdentifiers;
- (void)setAccessoryView:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setOverridenTraits:(id)arg1;
- (void)setRemovedMenuIdentifiers:(id)arg1;
- (void)setShortcutsBarWithLeadingGroups:(id)arg1 trailingGroups:(id)arg2;
- (void)setTextInputTraits:(id)arg1;

@end
