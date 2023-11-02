
@interface DNDMutableMode : DNDMode

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *symbolImageName;
@property (nonatomic, copy) NSString *tintColorName;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setName:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setTintColorName:(id)arg1;

@end
