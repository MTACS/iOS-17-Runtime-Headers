
@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol> {
    VUIUpNextButtonProperties * _properties;
    id /* block */  _stateDidChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIUpNextButtonProperties *properties;
@property (nonatomic, copy) id /* block */ stateDidChangeHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)largeContentTitle;
- (id)properties;
- (void)selectButtonAction:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setStateDidChangeHandler:(id /* block */)arg1;
- (void)setTintColor:(id)arg1;
- (id /* block */)stateDidChangeHandler;
- (void)upNextStateChangedToAdded;
- (void)upNextStateChangedToRemoved;
- (void)updateAccessibilityIdentifierAfterStateChanged;

@end
