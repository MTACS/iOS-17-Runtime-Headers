
@interface IKWeakHandle : IKHandle {
    id /* block */  _getter;
    id  _object;
}

- (void).cxx_destruct;
- (id)initWithGetter:(id /* block */)arg1;
- (id)object;

@end
