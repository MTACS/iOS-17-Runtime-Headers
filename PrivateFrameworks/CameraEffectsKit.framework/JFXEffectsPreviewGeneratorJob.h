
@interface JFXEffectsPreviewGeneratorJob : NSObject {
    NSArray * _callbackKeys;
    NSArray * _outputNodes;
}

@property (nonatomic, readonly) NSArray *callbackKeys;
@property (nonatomic, readonly) NSArray *outputNodes;

- (void).cxx_destruct;
- (id)callbackKeys;
- (id)init;
- (id)initWithRenderOutputs:(id)arg1 callbackKeys:(id)arg2;
- (id)outputNodes;

@end
