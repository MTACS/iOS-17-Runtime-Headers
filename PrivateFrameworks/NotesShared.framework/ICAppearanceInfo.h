
@interface ICAppearanceInfo : NSObject {
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool isDark;
@property (nonatomic, readonly) double navigationBarAlpha;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic) unsigned long long type;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)appearanceInfoWithType:(unsigned long long)arg1;
+ (void)enumerateAppearanceTypesUsingBlock:(id /* block */)arg1;

- (id)description;
- (unsigned long long)hash;
- (bool)isDark;
- (bool)isEqual:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)currentInfo;

- (double)navigationBarAlpha;
- (void)performAsCurrentAppearance:(id /* block */)arg1;
- (id)traitCollection;

@end
