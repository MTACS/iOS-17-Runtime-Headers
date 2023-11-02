
@interface TRIClientNamespaceMetadataStorage : NSObject <TRIClientNamespaceMetadataStoring> {
    <TRIPaths> * _paths;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

- (void).cxx_destruct;
- (id)initWithPaths:(id)arg1;
- (id)loadNamespaceMetadataForNamespaceName:(id)arg1 error:(id*)arg2;
- (id)urlForNamespaceMetadataForNamespaceName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

- (bool)mergeNamespaceMetadata:(id)arg1 forNamespaceName:(id)arg2;
- (bool)removeOutdatedNamespaceMetadataForNamespaceName:(id)arg1 currentCompatibilityVersion:(unsigned int)arg2;

@end
