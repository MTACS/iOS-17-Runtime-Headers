
@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl

- (id)cooldownErrorWithUnderlyingError:(id)arg1;
- (id)globalHardLimitError;
- (id)globalHardLimitErrorWithRecord:(id)arg1;
- (void)handleHardLimitError:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSoftLimitError:(id)arg1 completion:(id /* block */)arg2;
- (id)hardLimitErrorForRecord:(id)arg1;
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
- (bool)supportsErrorPresentation;

@end
