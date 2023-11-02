
@interface WFMenu : NSObject {
    NSArray * _elements;
    bool  _shouldDisplayInFixedOrder;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) UIMenu *platformMenu;
@property (nonatomic) bool shouldDisplayInFixedOrder;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)buildMenuWithTitle:(id)arg1 children:(id)arg2;
- (id)elements;
- (id)initWithElements:(id)arg1;
- (id)initWithTitle:(id)arg1 elements:(id)arg2;
- (id)platformMenu;
- (void)setShouldDisplayInFixedOrder:(bool)arg1;
- (bool)shouldDisplayInFixedOrder;
- (id)title;
- (id)uiMenuElementForWFMenuElement:(id)arg1 shouldShowState:(bool)arg2;

@end
