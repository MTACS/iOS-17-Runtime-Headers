
@interface PKPaymentPreferenceAddListItem : PKPaymentPreferenceListItem {
    UIColor * _buttonTextColor;
    id /* block */  _handler;
    int  _type;
}

@property (nonatomic, retain) UIColor *buttonTextColor;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)_text;
- (id)buttonTextColor;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)handler;
- (id)initWithAddPreferenceType:(int)arg1 forSectionPreference:(id)arg2 handler:(id /* block */)arg3;
- (void)setButtonTextColor:(id)arg1;
- (int)type;

@end
