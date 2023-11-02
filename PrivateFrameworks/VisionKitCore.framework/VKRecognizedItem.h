
@interface VKRecognizedItem : NSObject {
    VKFrameInfo * _frameInfo;
    VKQuad * _layerQuad;
    VNObservation * _observation;
    NSUUID * _uuid;
    VKQuad * _visionQuad;
}

@property (nonatomic, readonly) VKFrameInfo *frameInfo;
@property (nonatomic, readonly) VKQuad *layerQuad;
@property (nonatomic, retain) VNObservation *observation;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) VKQuad *visionQuad;

- (void).cxx_destruct;
- (void)applyHomographyWarpTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)associateWithItem:(id)arg1;
- (id)frameInfo;
- (unsigned long long)hash;
- (id)initWithFrameInfo:(id)arg1 rectangleObservation:(id)arg2;
- (id)initWithFrameInfo:(id)arg1 rectangleObservation:(id)arg2 layoutDirection:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)layerQuad;
- (id)observation;
- (void)setObservation:(id)arg1;
- (bool)shouldAssociateWithItem:(id)arg1;
- (id)uuid;
- (id)visionQuad;

@end
