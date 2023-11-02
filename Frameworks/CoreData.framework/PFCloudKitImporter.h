
@interface PFCloudKitImporter : NSObject {
    PFCloudKitImporterOptions * _options;
    NSCloudKitMirroringImportRequest * _request;
    unsigned long long  _totalImportedBytes;
    CKServerChangeToken * _updatedDatabaseChangeToken;
    NSMutableArray * _workItemResults;
    NSArray * _workItems;
}

- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;

@end
