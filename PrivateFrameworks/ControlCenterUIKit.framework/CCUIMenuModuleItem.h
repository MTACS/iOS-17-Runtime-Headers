
@interface CCUIMenuModuleItem : NSObject {
    bool  _busy;
    id /* block */  _handler;
    NSString * _identifier;
    bool  _placeholder;
    bool  _selected;
    NSString * _subtitle;
    NSString * _title;
}

@property (getter=isBusy, nonatomic) bool busy;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isPlaceholder, nonatomic) bool placeholder;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 handler:(id /* block */)arg3;
- (bool)isBusy;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (bool)isSelected;
- (bool)performAction;
- (void)setBusy:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
