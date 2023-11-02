
@interface OADTheme : NSObject {
    OADBaseStyles * mBaseStyles;
    OADDrawableDefaults * mDrawableDefaults;
    NSString * mName;
}

@property (nonatomic, retain) OADBaseStyles *baseStyles;
@property (nonatomic, readonly) OADDrawableDefaults *drawableDefaults;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)baseStyles;
- (id)description;
- (id)drawableDefaults;
- (id)init;
- (bool)isEmpty;
- (id)name;
- (void)setBaseStyles:(id)arg1;
- (void)setName:(id)arg1;
- (void)validateTheme;

@end
