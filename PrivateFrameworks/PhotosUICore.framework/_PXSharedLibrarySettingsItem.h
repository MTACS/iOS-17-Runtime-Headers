
@interface _PXSharedLibrarySettingsItem : NSObject {
    UIView * _accessoryView;
    SEL  _action;
    UIView * _customView;
    UIImage * _image;
    bool  _refusesSelection;
    NSString * _title;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) SEL action;
@property (nonatomic, retain) UIView *customView;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic) bool refusesSelection;
@property (nonatomic, copy) NSString *title;

+ (id)itemWithTitle:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryView;
- (SEL)action;
- (id)customView;
- (id)image;
- (bool)refusesSelection;
- (void)setAccessoryView:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setCustomView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setRefusesSelection:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
