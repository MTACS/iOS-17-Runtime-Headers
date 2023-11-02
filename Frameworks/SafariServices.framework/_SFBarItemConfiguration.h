
@interface _SFBarItemConfiguration : NSObject {
    NSAttributedString * _attributedTitle;
    bool  _enabled;
    bool  _hasImage;
    bool  _hidden;
    UIImage * _image;
    UIMenu * _menu;
    bool  _selected;
    NSString * _title;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasImage;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) UIMenu *menu;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)attributedTitle;
- (bool)hasImage;
- (id)image;
- (id)init;
- (bool)isEnabled;
- (bool)isHidden;
- (bool)isSelected;
- (id)menu;
- (void)setAttributedTitle:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
