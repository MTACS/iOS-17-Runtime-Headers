
@interface HDDocumentQueryServer : HDQueryServer {
    NSArray * _authorizedSamples;
    unsigned long long  _clientSampleIndex;
    bool  _includeDocumentData;
    unsigned long long  _maxResults;
    NSArray * _sortDescriptors;
    bool  _suspended;
}

@property (nonatomic, readonly) bool includeDocumentData;
@property (nonatomic, readonly) unsigned long long maxResults;
@property (nonatomic, readonly) NSArray *sortDescriptors;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)includeDocumentData;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (unsigned long long)maxResults;
- (id)sortDescriptors;
- (bool)validateConfiguration:(id*)arg1;

@end
