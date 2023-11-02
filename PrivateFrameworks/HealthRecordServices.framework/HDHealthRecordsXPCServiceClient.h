
@interface HDHealthRecordsXPCServiceClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_performWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_synchronousPerformWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)compareExistingPatientResourceData:(id)arg1 incomingPatientResourceData:(id)arg2 completion:(id /* block */)arg3;
- (void)connectionInvalidated;
- (void)dealloc;
- (void)executeFHIRExtractionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)executeFHIRReferenceExtractionRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (void)extractAttachmentContentFromFHIRResource:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSpotlightSearchResultsForQueryString:(id)arg1 completion:(id /* block */)arg2;
- (void)indexClinicalDocumentsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)optInDataForFHIRDocumentWithRequest:(id)arg1 redactor:(id)arg2 completion:(id /* block */)arg3;
- (void)preprocessSignedClinicalData:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)preprocessSignedClinicalDataFHIRResourceObject:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)processOriginalSignedClinicalDataRecords:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)processSignedClinicalDataContextCollection:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)reprocessOriginalSignedClinicalDataRecords:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)rulesVersionForFHIRDocumentExtractionWithError:(id*)arg1;
- (id)supportedFHIRConfigurationWithError:(id*)arg1;

@end
