
@interface MDLStereoscopicCamera : MDLCamera {
    float  _interPupillaryDistance;
    float  _leftVergence;
    float  _overlap;
    float  _rightVergence;
}

@property (nonatomic) float interPupillaryDistance;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } leftProjectionMatrix;
@property (nonatomic) float leftVergence;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } leftViewMatrix;
@property (nonatomic) float overlap;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rightProjectionMatrix;
@property (nonatomic) float rightVergence;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rightViewMatrix;

- (id)init;
- (float)interPupillaryDistance;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })leftProjectionMatrix;
- (float)leftVergence;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })leftViewMatrix;
- (float)overlap;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rightProjectionMatrix;
- (float)rightVergence;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rightViewMatrix;
- (void)setInterPupillaryDistance:(float)arg1;
- (void)setLeftVergence:(float)arg1;
- (void)setOverlap:(float)arg1;
- (void)setRightVergence:(float)arg1;

@end
