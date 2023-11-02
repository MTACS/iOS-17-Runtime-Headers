
@interface HKDisplayCategory : NSObject {
    long long  _categoryID;
    NSString * _categoryName;
    NSString * _displayName;
    NSString * _embeddedDisplayName;
    NSString * _healthDataIconName;
    id /* block */  _keyColor;
    NSString * _largeListIconName;
    NSString * _listIconName;
    NSString * _shareIconName;
    id /* block */  _symbolConfiguration;
    NSString * _systemImageName;
}

@property (nonatomic, readonly) long long categoryID;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *embeddedDisplayName;
@property (nonatomic, readonly) HKFillStyle *fillStyle;
@property (nonatomic, readonly) NSString *healthDataIconName;
@property (nonatomic, readonly) bool isMeCategory;
@property (nonatomic, readonly) bool isTopLevelCategory;
@property (nonatomic, readonly) UIImage *largeListIcon;
@property (nonatomic, readonly) NSString *largeListIconName;
@property (nonatomic, readonly) UIImage *listIcon;
@property (nonatomic, readonly) NSString *listIconName;
@property (nonatomic, readonly) UIImageSymbolConfiguration *multiColorImageConfiguration;
@property (nonatomic, readonly) UIImage *shareIcon;
@property (nonatomic, readonly) NSString *shareIconName;
@property (nonatomic, readonly) UIImage *systemImage;
@property (nonatomic, readonly) NSString *systemImageName;

+ (id)allCategories;
+ (id)categoryWithID:(long long)arg1;
+ (id)categoryWithName:(id)arg1;
+ (id)sortedCategories;
+ (id)topLevelCategoryIdentifiers;

- (void).cxx_destruct;
- (id)_image;
- (long long)categoryID;
- (id)categoryName;
- (id)color;
- (id)color;
- (id)displayName;
- (id)embeddedDisplayName;
- (id)fillStyle;
- (unsigned long long)hash;
- (id)healthDataIconName;
- (id)init;
- (id)initWithCategoryID:(long long)arg1 displayName:(id)arg2 listIconName:(id)arg3 largeListIconName:(id)arg4 shareIconName:(id)arg5 systemImageName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isMeCategory;
- (bool)isTopLevelCategory;
- (id)largeListIcon;
- (id)largeListIconName;
- (id)listIcon;
- (id)listIconName;
- (id)multiColorImageConfiguration;
- (id)multiColorImageConfiguration;
- (id)shareIcon;
- (id)shareIconName;
- (id)systemImage;
- (id)systemImageName;

@end
