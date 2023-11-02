
@interface DSPGCoreMLInfo : NSObject {
    NSSet * _feedbackConnections;
    DSPGMLInputProvider * _inputProvider;
    <SNMLModel> * _model;
    <MLFeatureProvider> * _outputProvider;
}

- (void).cxx_destruct;

@end
