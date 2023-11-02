
@interface UIMutableTransformer : UITransformer {
    <UIMutableTransformerDelegate> * _delegate;
}

@property (setter=_setDelegate:, nonatomic) <UIMutableTransformerDelegate> *_delegate;

- (void).cxx_destruct;
- (id)_delegate;
- (void)_ensureTransformsStructuresExists;
- (void)_setDelegate:(id)arg1;
- (void)_updateTransform;
- (void)addTransform:(id)arg1 reason:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeAll;
- (void)removeTransform:(id)arg1;
- (void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3;

@end
