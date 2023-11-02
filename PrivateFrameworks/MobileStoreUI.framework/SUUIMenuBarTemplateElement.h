
@interface SUUIMenuBarTemplateElement : SUUIViewElement

@property (nonatomic, readonly) SUUIViewElement<SUUIMenuBarViewElement> *menuBar;
@property (nonatomic, readonly) SUUINavigationBarViewElement *navigationBarElement;

- (id)_menuBarChildOfElement:(id)arg1;
- (id)menuBar;
- (id)navigationBarElement;

@end
