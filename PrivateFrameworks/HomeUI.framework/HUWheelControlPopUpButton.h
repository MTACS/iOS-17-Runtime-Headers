
@interface HUWheelControlPopUpButton : UIButton <HUControlView> {
    <HUControlViewDelegate> * _delegate;
    NSString * _identifier;
    id  _value;
    NSFormatter * _valueFormatter;
    NSArray * _values;
}

@property (nonatomic) bool canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSFormatter *valueFormatter;
@property (nonatomic, retain) NSArray *values;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_createMenu;
- (id)delegate;
- (id)identifier;
- (bool)isDisabled;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (void)setValues:(id)arg1;
- (id)value;
- (id)valueFormatter;
- (id)values;

@end
