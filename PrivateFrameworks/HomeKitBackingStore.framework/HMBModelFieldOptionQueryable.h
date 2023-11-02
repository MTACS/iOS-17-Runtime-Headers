
@interface HMBModelFieldOptionQueryable : HMBModelFieldOption {
    id /* block */  _decodingBlock;
    id /* block */  _descriptionBlock;
    id /* block */  _encodingBlock;
}

@property (nonatomic, copy) id /* block */ decodingBlock;
@property (nonatomic, copy) id /* block */ descriptionBlock;
@property (nonatomic, copy) id /* block */ encodingBlock;

- (void).cxx_destruct;
- (void)applyTo:(id)arg1;
- (id /* block */)decodingBlock;
- (id /* block */)descriptionBlock;
- (id /* block */)encodingBlock;
- (id)initWithEncodingBlock:(id /* block */)arg1 decodingBlock:(id /* block */)arg2 descriptionBlock:(id /* block */)arg3;
- (void)setDecodingBlock:(id /* block */)arg1;
- (void)setDescriptionBlock:(id /* block */)arg1;
- (void)setEncodingBlock:(id /* block */)arg1;

@end
