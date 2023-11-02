
@interface BSBlockTransaction : BSTransaction {
    id /* block */  _block;
    NSString * _debugName;
}

@property (nonatomic, copy) NSString *debugName;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (id)_descriptionProem;
- (id)_graphNodeDebugName;
- (id)debugName;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setDebugName:(id)arg1;

@end
