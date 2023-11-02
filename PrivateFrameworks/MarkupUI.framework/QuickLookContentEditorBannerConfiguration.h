
@interface QuickLookContentEditorBannerConfiguration : NSObject {
    UIAction * _dismissAction;
    UIImage * _image;
    UIAction * _primaryAction;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) UIAction *dismissAction;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIAction *primaryAction;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)configurationWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 primaryAction:(id)arg4 dismissAction:(id)arg5;

- (void).cxx_destruct;
- (id)dismissAction;
- (id)image;
- (id)primaryAction;
- (void)setDismissAction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPrimaryAction:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
