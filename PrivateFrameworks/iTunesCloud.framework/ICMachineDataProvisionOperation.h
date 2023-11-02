
@interface ICMachineDataProvisionOperation : ICMachineDataOperation {
    ICADIProvisionSession * _provisionSession;
}

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)execute;

@end
