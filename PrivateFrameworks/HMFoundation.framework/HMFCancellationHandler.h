
@interface HMFCancellationHandler : HMFObject <HMFCancellable> {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBlock:(id /* block */)arg1;

@end
