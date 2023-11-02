
@interface CPSEntityButton : CPSActionButton {
    CPButton * _entityButton;
}

@property (nonatomic, retain) CPButton *entityButton;

+ (id)buttonWithEntityButton:(id)arg1;

- (void).cxx_destruct;
- (id)CPSButtonImageForButton:(id)arg1;
- (id)CPSButtonTitleForButton:(id)arg1;
- (id)entityButton;
- (void)setEntityButton:(id)arg1;

@end
