
@interface _PXSimulatedFailingMediaRequest : _PXSimulatedMediaRequest {
    bool  _didReturnError;
    NSError * _error;
}

- (void).cxx_destruct;
- (void)handleOriginalResult:(id)arg1 info:(id)arg2;
- (id)initWithWrappedMediaRequest:(id)arg1 error:(id)arg2;

@end
