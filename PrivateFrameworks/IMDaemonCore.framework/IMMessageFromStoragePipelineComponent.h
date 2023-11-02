
@interface IMMessageFromStoragePipelineComponent : IMPipelineComponent {
    id  _broadcaster;
    unsigned long long  _processingType;
    IMDMessageFromStorageController * _storageController;
}

- (void).cxx_destruct;
- (id)initWithStorageProcessingType:(unsigned long long)arg1 storageController:(id)arg2 broadcaster:(id)arg3;
- (id)runIndividuallyWithInput:(id)arg1;

@end
