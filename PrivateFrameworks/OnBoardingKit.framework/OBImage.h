
@interface OBImage : UIImage {
    NSBundle * _bundle;
    NSString * _name;
    long long  _style;
    UIColor * _tintColor;
}

@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)_imageNameForUIInterfaceStyle:(long long)arg1 originalName:(id)arg2;
+ (id)_imageNamed:(id)arg1 inBundle:(id)arg2 convertToMatchInterfaceStyle:(bool)arg3;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (long long)rootInterfaceStyle;

- (void).cxx_destruct;
- (id)_flatImageWithColor:(id)arg1;
- (id)_obFlatImageWithColor:(id)arg1;
- (id)bundle;
- (id)imageForUserInterfaceStyle:(long long)arg1;
- (id)name;
- (void)setBundle:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (long long)style;
- (id)tintColor;

@end
