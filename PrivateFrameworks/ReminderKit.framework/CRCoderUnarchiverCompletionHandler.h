
@interface CRCoderUnarchiverCompletionHandler : NSObject {
    id /* block */  block;
    id  dependency;
    id  value;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) id dependency;
@property (nonatomic) id value;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)dependency;
- (void)setBlock:(id /* block */)arg1;
- (void)setDependency:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
