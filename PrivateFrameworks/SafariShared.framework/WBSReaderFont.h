
@interface WBSReaderFont : NSObject <NSCopying> {
    NSString * _displayName;
    NSString * _familyName;
    bool  _hasCalculatedLocalizedName;
    NSString * _localizedName;
    long long  _type;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *familyNameForWebContent;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)fontWithFamilyName:(id)arg1 displayName:(id)arg2;
+ (id)systemFont;
+ (id)systemFontWithDisplayName:(id)arg1;
+ (id)systemSerifFont;

- (void).cxx_destruct;
- (struct RetainPtr<const __CTFontDescriptor *> { void *x1; })_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(bool)arg2;
- (id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 type:(long long)arg3;
- (id)_localizedName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)familyName;
- (id)familyNameForWebContent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (id)fontOfSize:(double)arg1;
- (void)isInstalledWithCompletionHandler:(id /* block */)arg1;

@end
