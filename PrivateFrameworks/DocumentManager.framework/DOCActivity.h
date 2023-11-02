
@interface DOCActivity : UIActivity {
    <DOCItemActivityPerformer> * _actionPerformerProxy;
    NSString * _identifier;
    UIImage * _image;
    NSString * _imageName;
    NSArray * _items;
    NSString * _localizedTitle;
}

@property (readonly) <DOCItemActivityPerformer> *actionPerformerProxy;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *localizedTitle;

+ (long long)_activityStyleForActivityIdentifier:(id)arg1;
+ (id)_activityWithIdentifier:(id)arg1 forBrowserAction:(id)arg2 actionPerformerProxy:(id)arg3;
+ (id)_imageNameForActivityIdentifier:(id)arg1;
+ (id)_titleForActivityIdentifier:(id)arg1;
+ (long long)activityCategory;
+ (id)activityForBrowserAction:(id)arg1 actionPerformerProxy:(id)arg2;
+ (id)activityWithIdentifier:(id)arg1 actionPerformerProxy:(id)arg2;
+ (bool)isDestructiveActionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_needsResolvedActivityItems;
- (id)_systemImageName;
- (id)actionPerformerProxy;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)identifier;
- (id)image;
- (id)imageName;
- (id)initWithIdentifier:(id)arg1 actionPerformer:(id)arg2 forBrowserAction:(id)arg3;
- (id)items;
- (id)localizedTitle;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)validate;

@end
