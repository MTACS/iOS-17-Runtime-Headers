
@interface PKKeyValueTableViewSettingsRow : NSObject <PKTableViewSettingsRow> {
    id /* block */  _changeHandler;
    bool  _enabled;
    <NSCopying> * _identifier;
    UIColor * _primaryTextColor;
    UIColor * _secondaryTextColor;
    NSString * _sectionID;
    NSString * _title;
    id  _value;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, copy) UIColor *primaryTextColor;
@property (nonatomic, copy) UIColor *secondaryTextColor;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id value;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 value:(id)arg3;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 value:(id)arg3 sectionID:(id)arg4;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldHighlight;
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)title;
- (id)value;

@end
