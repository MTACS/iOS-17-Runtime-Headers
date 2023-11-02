
@interface JFXEffectCategory : NSObject {
    NSString * _categoryID;
    bool  _containsNewEffects;
    NSString * _displayName;
    NSArray * _effectIDs;
    int  _effectType;
    bool  _isNewCategory;
}

@property (nonatomic, retain) NSString *categoryID;
@property (nonatomic, readonly) bool containsNewEffects;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSArray *effectIDs;
@property (nonatomic) int effectType;
@property (nonatomic, readonly) bool isNewCategory;

- (void).cxx_destruct;
- (id)categoryID;
- (bool)containsNewEffects;
- (id)displayName;
- (id)effectIDs;
- (int)effectType;
- (id)initWithCategoryID:(id)arg1 forEffectType:(int)arg2 displayName:(id)arg3 effectIDs:(id)arg4 isNewCategory:(bool)arg5 containsNewEffects:(bool)arg6;
- (bool)isNewCategory;
- (void)setCategoryID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEffectIDs:(id)arg1;
- (void)setEffectType:(int)arg1;

@end
