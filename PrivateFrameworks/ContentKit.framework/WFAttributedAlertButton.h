
@interface WFAttributedAlertButton : WFSelectableAlertButton {
    NSAttributedString * _attributedTitle;
    NSString * _label;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedTitle;
@property (nonatomic, readonly, copy) NSString *label;

+ (id)buttonWithAttributedTitle:(id)arg1 label:(id)arg2 selected:(bool)arg3 style:(long long)arg4 handler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)attributedTitle;
- (id)label;

@end
