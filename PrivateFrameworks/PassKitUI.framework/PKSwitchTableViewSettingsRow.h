
@interface PKSwitchTableViewSettingsRow : NSObject <PKTableViewSettingsRow> {
    id /* block */  _changeHandler;
    bool  _enabled;
    <NSCopying> * _identifier;
    NSString * _title;
    id  _value;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id value;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (void)_switchValueChanged:(id)arg1;
- (id /* block */)changeHandler;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 value:(bool)arg3 changeHandler:(id /* block */)arg4;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldHighlight;
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)title;
- (id)value;

@end
