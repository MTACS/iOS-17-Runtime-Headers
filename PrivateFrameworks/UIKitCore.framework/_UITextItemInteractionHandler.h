
@interface _UITextItemInteractionHandler : NSObject {
    _UITextInteractableItem * _item;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    UIView<_UITextContent> * _textContentView;
}

@property (nonatomic, readonly) _UITextInteractableItem *item;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) UIView<_UITextContent> *textContentView;

- (void).cxx_destruct;
- (bool)_canPresentMenuWithoutPrimaryAction;
- (id)_defaultContextMenuConfiguration;
- (id)_defaultMenuForInteractableItem;
- (id)_defaultPrimaryActionForInteractableItem;
- (id)_menuForInteractableItem;
- (id)_preparedMenuConfigurationWithDefaultMenu:(id)arg1;
- (id)contextMenuConfiguration;
- (id)initWithItem:(id)arg1 textContentView:(id)arg2;
- (id)item;
- (id)primaryAction;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)textContentView;

@end
