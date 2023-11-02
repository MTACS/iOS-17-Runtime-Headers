
@interface UIBridgedAnimatable : NSObject {
    id /* block */  _completion;
    <UIVectorOperatable> * _fromValue;
    bool  _isFinished;
    NSString * _key;
    CALayer * _layer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CAPresentationModifier * _presentationModifier;
    <UIVectorOperatable> * _toValue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) <UIVectorOperatable> *fromValue;
@property (nonatomic) bool isFinished;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) CALayer *layer;
@property (nonatomic, retain) CAPresentationModifier *presentationModifier;
@property (nonatomic, retain) <UIVectorOperatable> *toValue;

- (void).cxx_destruct;
- (void)animationDidFinish:(bool)arg1;
- (id /* block */)completion;
- (void)dealloc;
- (id)fromValue;
- (id)initWithLayer:(id)arg1 key:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 completion:(id /* block */)arg5;
- (bool)isFinished;
- (id)key;
- (id)layer;
- (id)presentationModifier;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFromValue:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setPresentationModifier:(id)arg1;
- (void)setToValue:(id)arg1;
- (id)toValue;
- (void)updateWithProgress:(double)arg1;

@end
