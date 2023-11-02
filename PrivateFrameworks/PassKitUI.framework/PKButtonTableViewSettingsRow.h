
@interface PKButtonTableViewSettingsRow : NSObject <PKTableViewSettingsRow> {
    id /* block */  _changeHandler;
    bool  _enabled;
    <NSCopying> * _identifier;
    long long  _style;
    NSString * _title;
    id  _value;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id value;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 tapHandler:(id /* block */)arg3;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldHighlight;
- (long long)style;
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)title;
- (id)value;

@end
