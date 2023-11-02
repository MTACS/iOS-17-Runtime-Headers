
@interface _EXDecoderHack : NSCoder {
    id /* block */  _contextFactory;
}

@property (copy) id /* block */ contextFactory;

- (void).cxx_destruct;
- (id /* block */)contextFactory;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)initWithContextFactory:(id /* block */)arg1;
- (void)setContextFactory:(id /* block */)arg1;

@end
