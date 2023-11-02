
@interface PKPeerPayment3DScene : SCNScene {
    SCNNode * _cameraNode;
    void _currentRollPitch;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _currentRotationMatrix;
    void _currentSkew;
    SCNNode * _lightNode;
    SCNNode * _textContainerNode;
    SCNMaterial * _textMaterial;
}

@property (nonatomic, retain) SCNNode *cameraNode;
@property (nonatomic) void currentRollPitch;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } currentRotationMatrix;
@property (nonatomic) void currentSkew;
@property (nonatomic, retain) SCNNode *lightNode;
@property (nonatomic, retain) SCNNode *textContainerNode;
@property (nonatomic, retain) SCNMaterial *textMaterial;

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rotationMatrixForRollPitch;
+ (void)skewForRollPitch;
+ (void)staticRollPitch;

- (void).cxx_destruct;
- (id)cameraNode;
- (void)currentRollPitch;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })currentRotationMatrix;
- (void)currentSkew;
- (id)init;
- (id)lightNode;
- (void)resetScene;
- (void)setCameraNode:(id)arg1;
- (void)setCurrentRollPitch;
- (void)setCurrentRotationMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCurrentSkew;
- (void)setLightNode:(id)arg1;
- (void)setTextContainerNode:(id)arg1;
- (void)setTextMaterial:(id)arg1;
- (id)textContainerNode;
- (id)textMaterial;

@end
