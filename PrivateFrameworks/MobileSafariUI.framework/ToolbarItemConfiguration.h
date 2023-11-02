
@interface ToolbarItemConfiguration : NSObject {
    NSString * _accessibilityIdentifier;
    bool  _emphasized;
    UIImage * _image;
    bool  _showsIndicator;
    id  _title;
}

@property (nonatomic, retain) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (getter=isEmphasized, nonatomic) bool emphasized;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool showsIndicator;
@property (nonatomic, copy) NSString *title;

+ (id)configurationForProfile:(id)arg1;
+ (id)configurationForTabGroup:(id)arg1;
+ (id)configurationForTabGroup:(id)arg1 inProfile:(id)arg2;
+ (id)configurationForTabGroupPicker;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)attributedTitle;
- (id)buttonConfigurationWithStyle:(long long)arg1;
- (id)image;
- (id)init;
- (bool)isEmphasized;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setEmphasized:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setShowsIndicator:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showsIndicator;
- (id)title;

@end
