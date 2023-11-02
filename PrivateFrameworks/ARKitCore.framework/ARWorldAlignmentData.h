
@interface ARWorldAlignmentData : NSObject <ARResultData, NSSecureCoding> {
    unsigned long long  _modifiers;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldAlignmentTransform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool referenceOriginChanged;
@property (nonatomic) bool sessionShouldResumeCameraPosition;
@property (nonatomic) bool sessionShouldResumeCameraPositionAndHeading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long worldAlignmentModifiers;
@property (nonatomic) bool worldAlignmentReset;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldAlignmentTransform;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)referenceOriginChanged;
- (bool)sessionShouldResumeCameraPosition;
- (bool)sessionShouldResumeCameraPositionAndHeading;
- (void)setReferenceOriginChanged:(bool)arg1;
- (void)setSessionShouldResumeCameraPosition:(bool)arg1;
- (void)setSessionShouldResumeCameraPositionAndHeading:(bool)arg1;
- (void)setWorldAlignmentReset:(bool)arg1;
- (void)setWorldAlignmentTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (unsigned long long)worldAlignmentModifiers;
- (bool)worldAlignmentReset;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldAlignmentTransform;

@end
