
@interface HAP2AsynchronousBlockOperation : HAP2AsynchronousOperation {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 activity:(id)arg2;
- (id)initWithName:(id)arg1 activity:(id)arg2 block:(id /* block */)arg3;
- (id)initWithName:(id)arg1 block:(id /* block */)arg2;
- (id)initWithName:(id)arg1 optionalActivity:(id)arg2;
- (void)main;

@end
