
@interface _BCULayerRendererOperation : NSObject <BCUOperation> {
    bool  _cancelled;
    id /* block */  _completion;
    bool  _configuring;
    CALayer * _layer;
    id /* block */  _layerBlock;
    NSString * _logKey;
    _Atomic long long  _operationId;
    float  _priority;
    BCULayerRenderer * _renderer;
    <BCUPurgeableImage> * _result;
    bool  _waitForCPUSynchronization;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CALayer *layer;
@property (nonatomic, copy) id /* block */ layerBlock;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic) float priority;
@property (nonatomic, retain) BCULayerRenderer *renderer;
@property (nonatomic, retain) <BCUPurgeableImage> *result;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool waitForCPUSynchronization;

- (void).cxx_destruct;
- (long long)_compareHoldingStateLock:(id)arg1;
- (void)cancel;
- (void)completeWithImage:(id)arg1;
- (id /* block */)completion;
- (id)configureLayer;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 priority:(float)arg2 waitForCPUSynchronization:(bool)arg3 logKey:(id)arg4 layerBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)layer;
- (id /* block */)layerBlock;
- (id)logKey;
- (float)priority;
- (id)renderer;
- (id)result;
- (void)setCompletion:(id /* block */)arg1;
- (void)setLayer:(id)arg1;
- (void)setLayerBlock:(id /* block */)arg1;
- (void)setPriority:(float)arg1;
- (void)setRenderer:(id)arg1;
- (void)setResult:(id)arg1;
- (void)start;
- (bool)waitForCPUSynchronization;

@end
