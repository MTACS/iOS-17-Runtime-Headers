
@interface CNSharingProfileRowItem : NSObject {
    UIView * _accessoryView;
    bool  _isSelected;
    NSString * _label;
}

@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic) bool isSelected;
@property (nonatomic, readonly) NSString *label;

- (void).cxx_destruct;
- (id)accessoryView;
- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2;
- (bool)isSelected;
- (id)label;
- (void)setIsSelected:(bool)arg1;

@end
