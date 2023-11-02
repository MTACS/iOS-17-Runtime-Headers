
@interface _UIFeedbackLibraryPattern : _UIFeedback <_UIFeedbackCoreHapticsPaternProviding> {
    bool  _highPriority;
    NSString * _libraryKey;
    CHHapticPattern * _pattern;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (nonatomic, readonly) NSString *libraryKey;
@property (nonatomic, readonly) CHHapticPattern *pattern;
@property (readonly) Class superclass;

+ (id)feedbackPatternWithLibraryKey:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLibraryKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;
- (id)libraryKey;
- (id)pattern;

@end
