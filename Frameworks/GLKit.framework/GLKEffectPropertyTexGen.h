
@interface GLKEffectPropertyTexGen : GLKEffectProperty {
    int  _coord;
    float * _eyePlaneByInvModelview;
    int  _eyePlaneByInvModelviewLoc;
    int  _mode;
    int  _modeLoc;
    char * _modeNameString;
    float * _plane;
    int  _planeLoc;
    char * _planeNameString;
    unsigned int  _textureIndex;
}

@property (nonatomic, readonly) int coord;
@property (nonatomic) float*eyePlaneByInvModelview;
@property (nonatomic) int eyePlaneByInvModelviewLoc;
@property (nonatomic) int mode;
@property (nonatomic) int modeLoc;
@property (nonatomic) char *modeNameString;
@property (nonatomic) float*plane;
@property (nonatomic) int planeLoc;
@property (nonatomic) char *planeNameString;
@property (nonatomic) unsigned int textureIndex;

- (void)bind;
- (int)coord;
- (void)dealloc;
- (void)dirtyAllUniforms;
- (float*)eyePlaneByInvModelview;
- (int)eyePlaneByInvModelviewLoc;
- (id)init;
- (id)initWithMode:(int)arg1 coord:(int)arg2;
- (void)initializeMasks;
- (int)mode;
- (int)modeLoc;
- (char *)modeNameString;
- (float*)plane;
- (int)planeLoc;
- (char *)planeNameString;
- (void)setEyePlaneByInvModelview:(float*)arg1;
- (void)setEyePlaneByInvModelviewLoc:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setModeLoc:(int)arg1;
- (void)setModeNameString:(char *)arg1;
- (void)setPlane:(float*)arg1;
- (void)setPlaneLoc:(int)arg1;
- (void)setPlaneNameString:(char *)arg1;
- (void)setShaderBindings;
- (void)setTextureIndex:(unsigned int)arg1;
- (unsigned int)textureIndex;

@end
