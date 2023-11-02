
@interface USUIInterventionScreenModel : NSObject {
    NSArray * _actions;
    NSArray * _bullets;
    NSString * _emoji;
    NSString * _imageName;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) NSArray *bullets;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *title;

+ (id)actionsForScreen:(long long)arg1 workflow:(long long)arg2 type:(long long)arg3 options:(long long)arg4;
+ (id)actionsForScreenOne:(long long)arg1 type:(long long)arg2 options:(long long)arg3;
+ (id)actionsForScreenTwo:(long long)arg1 type:(long long)arg2;
+ (id)bulletsForScreen:(long long)arg1 workflow:(long long)arg2 type:(long long)arg3;
+ (id)bulletsForScreenOneOver13:(long long)arg1;
+ (id)bulletsForScreenOneUnder13:(long long)arg1;
+ (id)bulletsForScreenTwoOver13:(long long)arg1;
+ (id)bulletsForScreenTwoUnder13:(long long)arg1;
+ (id)emojiForScreen:(long long)arg1;
+ (id)imageNameForScreen:(long long)arg1;
+ (id)modelForScreen:(long long)arg1 workflow:(long long)arg2 type:(long long)arg3;
+ (id)modelForScreen:(long long)arg1 workflow:(long long)arg2 type:(long long)arg3 options:(long long)arg4;
+ (id)titleForScreen:(long long)arg1 workflow:(long long)arg2;

- (void).cxx_destruct;
- (id)actions;
- (id)bullets;
- (id)emoji;
- (id)imageName;
- (void)setActions:(id)arg1;
- (void)setBullets:(id)arg1;
- (void)setEmoji:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
