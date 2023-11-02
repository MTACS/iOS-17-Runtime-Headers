
@interface _WKApplicationManifest : NSObject <NSSecureCoding, WKObject> {
    struct ObjectStorage<API::ApplicationManifest> { 
        struct type { 
            unsigned char __lx[200]; 
        } data; 
    }  _applicationManifest;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSString *applicationDescription;
@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *icons;
@property (nonatomic, readonly, copy) NSURL *manifestId;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSDictionary *safari_dictionaryRepresentation;
@property (nonatomic, readonly) long long safari_displayMode;
@property (nonatomic, readonly) NSString *safari_enforcedStartURLPrefix;
@property (setter=safari_setImages:, nonatomic, retain) NSArray *safari_images;
@property (nonatomic, readonly) bool safari_isStandalone;
@property (setter=safari_setIsSynthesized:, nonatomic) bool safari_isSynthesized;
@property (setter=safari_setName:, nonatomic, retain) NSString *safari_name;
@property (nonatomic, readonly) bool safari_respectsHasOpener;
@property (setter=safari_setStartURL:, nonatomic, retain) NSURL *safari_startURL;
@property (nonatomic, readonly, copy) NSURL *scope;
@property (nonatomic, readonly, copy) NSString *shortName;
@property (nonatomic, readonly, copy) NSURL *startURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) UIColor *themeColor;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)applicationManifestFromJSON:(id)arg1 manifestURL:(id)arg2 documentURL:(id)arg3;
+ (bool)supportsSecureCoding;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)applicationDescription;
- (id)backgroundColor;
- (void)dealloc;
- (long long)displayMode;
- (void)encodeWithCoder:(id)arg1;
- (id)icons;
- (id)initWithCoder:(id)arg1;
- (id)manifestId;
- (id)name;
- (struct optional<_WKApplicationManifestOrientation> { union { BOOL x_1_1_1; long long x_1_1_2; } x1; bool x2; })orientation;
- (id)scope;
- (id)shortName;
- (id)startURL;
- (id)themeColor;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_manifestWithName:(id)arg1 URL:(id)arg2;

- (id)_resolvedScopeURLString:(id)arg1 usingStartURLString:(id)arg2;
- (id)_safari_quirkedNameFrom:(id)arg1;
- (id)safari_dictionaryRepresentation;
- (long long)safari_displayMode;
- (id)safari_enforcedStartURLPrefix;
- (id)safari_images;
- (bool)safari_isStandalone;
- (bool)safari_isSynthesized;
- (id)safari_name;
- (bool)safari_respectsHasOpener;
- (void)safari_setImages:(id)arg1;
- (void)safari_setIsSynthesized:(bool)arg1;
- (void)safari_setName:(id)arg1;
- (void)safari_setStartURL:(id)arg1;
- (id)safari_startURL;

@end
