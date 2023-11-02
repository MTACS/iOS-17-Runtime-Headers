
@interface PXCPLActionPerformer : PXActionPerformer {
    PXCPLUIStatus * _cplUIStatus;
}

@property (nonatomic, readonly) PXCPLUIStatus *cplUIStatus;

- (void).cxx_destruct;
- (id)cplUIStatus;
- (void)performActionWithCPLUIStatus:(id)arg1 completionHandler:(id /* block */)arg2;

@end
