
@interface MCWebClipPayload : MCPayload {
    NSURL * _URL;
    NSString * _contentMode;
    bool  _fullScreen;
    NSNumber * _fullScreenNum;
    NSData * _iconData;
    bool  _ignoreManifestScope;
    NSNumber * _ignoreManifestScopeNum;
    bool  _isRemovable;
    NSNumber * _isRemovableNum;
    NSString * _label;
    bool  _precomposed;
    NSNumber * _precomposedNum;
    NSString * _savedIdentifier;
    NSString * _targetApplicationBundleIdentifier;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly) NSString *contentMode;
@property (nonatomic, readonly) bool fullScreen;
@property (nonatomic, readonly) NSNumber *fullScreenNum;
@property (nonatomic, readonly, retain) NSData *iconData;
@property (nonatomic, readonly) bool ignoreManifestScope;
@property (nonatomic, readonly) NSNumber *ignoreManifestScopeNum;
@property (nonatomic, readonly) bool isRemovable;
@property (nonatomic, readonly) NSNumber *isRemovableNum;
@property (nonatomic, readonly, retain) NSString *label;
@property (nonatomic, readonly) bool precomposed;
@property (nonatomic, readonly) NSNumber *precomposedNum;
@property (nonatomic, retain) NSString *savedIdentifier;
@property (nonatomic, retain) NSString *targetApplicationBundleIdentifier;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)URL;
- (id)contentMode;
- (bool)fullScreen;
- (id)fullScreenNum;
- (id)iconData;
- (bool)ignoreManifestScope;
- (id)ignoreManifestScopeNum;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isRemovable;
- (id)isRemovableNum;
- (id)label;
- (id)payloadDescriptionKeyValueSections;
- (bool)precomposed;
- (id)precomposedNum;
- (id)savedIdentifier;
- (void)setSavedIdentifier:(id)arg1;
- (void)setTargetApplicationBundleIdentifier:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)targetApplicationBundleIdentifier;
- (id)title;
- (id)verboseDescription;

@end
