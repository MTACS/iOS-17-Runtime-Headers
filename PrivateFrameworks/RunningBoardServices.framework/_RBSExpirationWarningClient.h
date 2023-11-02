
@interface _RBSExpirationWarningClient : NSObject <RBSInvalidatable> {
    id /* block */  _block;
    id /* block */  _invalidationBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)invalidate;

@end
