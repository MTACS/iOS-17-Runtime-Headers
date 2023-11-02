
@interface HFFormatterTransformer : NSFormatter {
    NSFormatter * _sourceFormatter;
    id /* block */  _transformBlock;
}

@property (nonatomic, copy) NSFormatter *sourceFormatter;
@property (nonatomic, copy) id /* block */ transformBlock;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSourceFormatter:(id)arg1 transformBlock:(id /* block */)arg2;
- (void)setSourceFormatter:(id)arg1;
- (void)setTransformBlock:(id /* block */)arg1;
- (id)sourceFormatter;
- (id)stringForObjectValue:(id)arg1;
- (id /* block */)transformBlock;

@end
