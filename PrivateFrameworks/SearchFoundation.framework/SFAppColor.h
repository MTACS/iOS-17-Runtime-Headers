
@interface SFAppColor : SFColor <NSCopying, NSSecureCoding, SFAppColor> {
    NSString * _applicationBundleIdentifier;
}

@property (nonatomic) double alphaComponent;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic) double blueComponent;
@property (nonatomic) int colorTintStyle;
@property (nonatomic, retain) SFColor *darkModeColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double greenComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double redComponent;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setApplicationBundleIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)searchUI_colorGeneratorClass;

@end
