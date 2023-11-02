
@interface AXMModelDetectorNode : AXMEvaluationNode {
    VNCoreMLModel * _model;
    NSURL * _modelURL;
}

@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, retain) NSURL *modelURL;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (bool)_loadModel:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)modelIdentifier;
- (id)modelURL;
- (void)nodeInitialize;
- (bool)preloadModelIfNeeded:(id*)arg1;
- (bool)requiresVisionFramework;
- (void)setModelURL:(id)arg1;

@end
