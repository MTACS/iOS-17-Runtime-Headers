
@interface STUsageDetailItem : NSObject {
    NSString * _identifier;
    float  _quantity;
    long long  _type;
    bool  _usageTrusted;
}

@property (readonly) UIImage *darkColorsMonogram;
@property (readonly) UIImage *iconImage;
@property (readonly, copy) NSString *identifier;
@property (readonly) bool isAllAppsOrCategories;
@property (readonly) UIImage *lightColorsMonogram;
@property (readonly, copy) NSString *localizedDisplayName;
@property (nonatomic) float quantity;
@property (readonly) float sortQuantity;
@property long long type;
@property (readonly) bool usageTrusted;

// Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore

+ (id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+ (id)keyPathsForValuesAffectingSortQuantity;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 usageTrusted:(bool)arg3;
- (bool)isAllAppsOrCategories;
- (bool)isEqual:(id)arg1;
- (float)quantity;
- (void)setQuantity:(float)arg1;
- (void)setType:(long long)arg1;
- (float)sortQuantity;
- (long long)type;
- (bool)usageTrusted;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

+ (void)iconImageForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

- (void)_didFindIconImage:(id)arg1;
- (id)_monogramUsingDarkColors:(bool)arg1;
- (id)darkColorsMonogram;
- (id)iconImage;
- (id)lightColorsMonogram;
- (id)localizedDisplayName;

@end
