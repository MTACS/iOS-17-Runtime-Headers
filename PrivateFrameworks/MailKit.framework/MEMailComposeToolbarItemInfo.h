
@interface MEMailComposeToolbarItemInfo : NSObject {
    UIImage * _image;
    NSString * _label;
    NSString * _tooltip;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *tooltip;

- (void).cxx_destruct;
- (id)image;
- (id)initWithLabel:(id)arg1 image:(id)arg2 tooltip:(id)arg3;
- (id)label;
- (void)setImage:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTooltip:(id)arg1;
- (id)tooltip;

@end
