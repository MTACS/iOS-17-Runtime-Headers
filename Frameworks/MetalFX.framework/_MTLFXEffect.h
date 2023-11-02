
@interface _MTLFXEffect : NSObject {
    unsigned long long  _effectID;
    unsigned long long  _encodeID;
    <MTLFXEffectTracingDelegate> * _tracingDelegate;
}

@property (readonly) unsigned long long effectID;
@property <MTLFXEffectTracingDelegate> *tracingDelegate;

- (void).cxx_destruct;
- (void)_beginEncode;
- (void)_didCreateBlitCommandEncoder:(id)arg1 forEncode:(unsigned long long)arg2;
- (void)_didCreateComputeCommandEncoder:(id)arg1 forEncode:(unsigned long long)arg2;
- (void)_didCreateRenderCommandEncoder:(id)arg1 forEncode:(unsigned long long)arg2;
- (unsigned long long)effectID;
- (id)init;
- (void)setTracingDelegate:(id)arg1;
- (id)tracingDelegate;

@end
