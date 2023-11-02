
@interface TRISqliteErrorHandler : NSObject <_PASSqliteErrorHandlerProtocol> {
    <_PASSqliteErrorHandlerProtocol> * _defaultErrorHandler;
    <TRIStorageManagementProtocol> * _storageManagement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)handleSqliteError:(int)arg1 error:(id)arg2 onError:(id /* block */)arg3 db:(id)arg4;
- (id)initWithStorageManagement:(id)arg1;

@end
