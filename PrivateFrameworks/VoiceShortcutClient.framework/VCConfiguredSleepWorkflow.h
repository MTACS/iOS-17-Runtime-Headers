
@interface VCConfiguredSleepWorkflow : WFDatabaseObjectDescriptor <NSCopying, NSSecureCoding, WFGlyphDrawableItem, WFWorkflowReferenceConvertible> {
    NSString * _actionIdentifier;
    long long  _backgroundColorValue;
    NSString * _bundleIdentifierForDisplay;
    unsigned short  _glyphCharacter;
    struct CGImage { } * _iconImage;
    double  _iconScale;
    bool  _isAppLaunchWorkflow;
    NSString * _name;
    NSString * _summaryString;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly) long long backgroundColorValue;
@property (nonatomic, readonly, copy) NSString *bundleIdentifierForDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short glyphCharacter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*iconImage;
@property (nonatomic, readonly) double iconScale;
@property (nonatomic, readonly) bool isAppLaunchWorkflow;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *summaryString;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (struct CGSize { double x1; double x2; })glyphSize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (long long)backgroundColorValue;
- (id)bundleIdentifierForDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyphCharacter;
- (struct CGImage { }*)iconImage;
- (double)iconScale;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflowIdentifier:(id)arg1 bundleIdentifierForDisplay:(id)arg2 summaryString:(id)arg3 name:(id)arg4 actionIdentifier:(id)arg5 glyphCharacter:(unsigned short)arg6 backgroundColorValue:(long long)arg7 isAppLaunchWorkflow:(bool)arg8;
- (bool)isAppLaunchWorkflow;
- (id)name;
- (void)setIconImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)summaryString;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

+ (void)getObjectsFromReferences:(id)arg1 databaseProvider:(id)arg2 completion:(id /* block */)arg3;

@end
