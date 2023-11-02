
@interface PBFFocusPosterSuggestionData : NSObject {
    NSArray * _previews;
    NSMapTable * _previewsToSnapshotsMapTable;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *previews;
@property (nonatomic, readonly) NSMapTable *previewsToSnapshotsMapTable;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithPreviews:(id)arg1 previewsToSnapshotsMapTable:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)previewForUniqueIdentifier:(id)arg1;
- (id)previews;
- (id)previewsToSnapshotsMapTable;
- (id)snapshotForPoster:(id)arg1;

@end
