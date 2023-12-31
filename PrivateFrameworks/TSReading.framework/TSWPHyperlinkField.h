
@interface TSWPHyperlinkField : TSWPSmartField {
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *displayText;
@property (setter=setURL:, nonatomic, retain) NSURL *url;

+ (id)defaultFieldStyleIdentifier;
+ (id)defaultFileURL;
+ (id)defaultMailURL;
+ (id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (id)defaultWebURL;
+ (id)newURLFromURLReference:(id)arg1;
+ (int)schemeFromURL:(id)arg1;
+ (bool)schemeIsValidForURL:(id)arg1;
+ (bool)schemeIsValidForURLReference:(id)arg1;
+ (id)urlReferenceFromURL:(id)arg1;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)allowsEditing;
- (id)canonicalRepresentationURL;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)displayText;
- (int)elementKind;
- (id)filePath;
- (id)fullPath;
- (bool)hasDisplayText;
- (id)initWithContext:(id)arg1 url:(id)arg2;
- (bool)isFileURL;
- (int)scheme;
- (void)setURL:(id)arg1;
- (void)setURLReference:(id)arg1;
- (id)url;
- (id)urlPrefix;
- (id)urlReference;

@end
