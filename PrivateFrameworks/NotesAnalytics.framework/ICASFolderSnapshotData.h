
@interface ICASFolderSnapshotData : NSObject <AADataEventType> {
    NSArray * _folderSnapshotSummary;
}

@property (nonatomic, readonly) NSArray *folderSnapshotSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)folderSnapshotSummary;
- (id)initWithFolderSnapshotSummary:(id)arg1;
- (id)toDict;

@end
