
@interface CNMeCardSharingRowItem : NSObject {
    UIView * _accessoryView;
    id /* block */  _confirmationHandler;
    bool  _isSelected;
    NSString * _label;
}

@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic, readonly, copy) id /* block */ confirmationHandler;
@property (nonatomic) bool isSelected;
@property (nonatomic, readonly) NSString *label;

- (void).cxx_destruct;
- (id)accessoryView;
- (id /* block */)confirmationHandler;
- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2;
- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2 confirmationHandler:(id /* block */)arg3;
- (bool)isSelected;
- (id)label;
- (void)setIsSelected:(bool)arg1;

@end
