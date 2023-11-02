
@interface CHActivationMatrix : NSObject {
    CVNLPActivationMatrix * _activations;
    bool  _unlikelyHasLatinContents;
}

@property (nonatomic, retain) CVNLPActivationMatrix *activations;
@property (nonatomic) bool unlikelyHasLatinContents;

- (void).cxx_destruct;
- (id)activations;
- (id)initWithActivations:(id)arg1;
- (void)setActivations:(id)arg1;
- (void)setUnlikelyHasLatinContents:(bool)arg1;
- (bool)unlikelyHasLatinContents;

@end
