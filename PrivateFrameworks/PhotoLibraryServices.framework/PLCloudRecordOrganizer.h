
@interface PLCloudRecordOrganizer : NSObject {
    NSMutableArray * _albumRecords;
    NSMutableArray * _albumRecordsWithContainerChange;
    NSMutableArray * _assetRecords;
    NSMutableArray * _assetRecordsWithContainerChange;
    NSMutableArray * _deletePersonRecords;
    NSMutableArray * _deleteRecords;
    NSMutableArray * _expungedRecords;
    NSMutableArray * _faceCropRecords;
    NSMutableArray * _masterRecords;
    NSMutableArray * _memoryRecords;
    NSMutableArray * _personRecords;
    PLPhotoLibrary * _photoLibrary;
    NSMutableArray * _scopeRecords;
    NSMutableArray * _suggestionRecords;
}

@property (readonly) NSMutableArray *albumRecords;
@property (readonly) NSMutableArray *albumRecordsWithContainerChange;
@property (readonly) NSMutableArray *assetRecords;
@property (readonly) NSMutableArray *assetRecordsWithContainerChange;
@property (readonly) NSMutableArray *deletePersonRecords;
@property (readonly) NSMutableArray *deleteRecords;
@property (readonly) NSMutableArray *expungedRecords;
@property (readonly) NSMutableArray *faceCropRecords;
@property (readonly) NSMutableArray *masterRecords;
@property (readonly) NSMutableArray *memoryRecords;
@property (readonly) NSMutableArray *personRecords;
@property (readonly) NSMutableArray *scopeRecords;
@property (readonly) NSMutableArray *suggestionRecords;

+ (bool)records:(id)arg1 containsScopedIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)albumRecords;
- (id)albumRecordsWithContainerChange;
- (id)assetRecords;
- (id)assetRecordsWithContainerChange;
- (id)deletePersonRecords;
- (id)deleteRecords;
- (id)expungedRecords;
- (id)faceCropRecords;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)masterRecords;
- (id)memoryRecords;
- (void)organizeRecords:(id)arg1;
- (id)personRecords;
- (id)scopeRecords;
- (id)suggestionRecords;

@end
