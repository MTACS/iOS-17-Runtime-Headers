
@interface HUSetupCodeFieldItem : UIView {
    bool  _active;
    UILabel * _digitLabel;
    unsigned long long  _itemNumber;
    NSNumber * _value;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UILabel *digitLabel;
@property (nonatomic) unsigned long long itemNumber;
@property (nonatomic, retain) NSNumber *value;

- (void).cxx_destruct;
- (void)activate;
- (void)clear;
- (void)deactivate;
- (id)digitLabel;
- (id)init;
- (bool)isActive;
- (unsigned long long)itemNumber;
- (void)setActive:(bool)arg1;
- (void)setDigitLabel:(id)arg1;
- (void)setItemNumber:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
