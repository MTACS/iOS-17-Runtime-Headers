
@interface PKTextFieldTableViewSettingsRow : NSObject <PKTableViewSettingsRow, UITextFieldDelegate> {
    id /* block */  _changeHandler;
    bool  _enabled;
    PKTextFieldTableViewSettingsRowFormatter * _formatter;
    <NSCopying> * _identifier;
    long long  _keyboardType;
    NSString * _placeholder;
    NSString * _title;
    id  _value;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id value;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (void)_textFieldValueChanged:(id)arg1;
- (id /* block */)changeHandler;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 value:(id)arg3 formatter:(id)arg4 changeHandler:(id /* block */)arg5;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (long long)keyboardType;
- (id)placeholder;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldHighlight;
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (id)title;
- (id)value;

@end
