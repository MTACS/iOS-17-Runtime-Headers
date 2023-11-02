
@interface _HDBackgroundRunningAssertion : HDAssertion {
    BKSProcessAssertion * _bksAssertion;
    HDHealthStoreClient * _client;
    CLInUseAssertion * _coreLocationAssertion;
    bool  _shouldAcquireCLAssertion;
}

- (void).cxx_destruct;

@end
