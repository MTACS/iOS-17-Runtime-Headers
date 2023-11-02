
@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding> {
    _LSBoundIconInfo * __boundIconInfo;
    _LSLazyPropertyList * __iconsDictionary;
    NSString * _localizedName;
}

@property (setter=_setBoundIconInfo:, nonatomic, retain) _LSBoundIconInfo *_boundIconInfo;
@property (setter=_setIconsDictionary:, nonatomic, copy) _LSLazyPropertyList *_iconsDictionary;
@property (nonatomic, readonly) bool boundIconIsBadge;
@property (nonatomic, readonly) <LSIconResourceLocator> *iconResourceLocator;
@property (nonatomic, readonly) NSDictionary *iconsDictionary;
@property (setter=_setLocalizedName:, nonatomic, copy) NSString *localizedName;
@property (nonatomic, readonly) NSString *primaryIconName;
@property (nonatomic) unsigned long long propertyListCachingStrategy;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_boundIconInfo;
- (id)_iconsDictionary;
- (id)_initWithLocalizedName:(id)arg1;
- (id)_privateDocumentFileNamesAsCacheKey;
- (void)_setBoundIconInfo:(id)arg1;
- (void)_setIconsDictionary:(id)arg1;
- (void)_setLocalizedName:(id)arg1;
- (bool)boundIconIsBadge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)iconResourceLocator;
- (id)iconsDictionary;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)primaryIconName;
- (unsigned long long)propertyListCachingStrategy;
- (void)setPropertyListCachingStrategy:(unsigned long long)arg1;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (bool)__IS_canProvideResourceLocator;

- (id)__IS_iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)__IS_iconResourceLocator;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (struct CGSize { double x1; double x2; })_applicationIconCanvasSize;
+ (long long)_compareApplicationIconCanvasSize:(struct CGSize { double x1; double x2; })arg1 withSize:(struct CGSize { double x1; double x2; })arg2;

@end
