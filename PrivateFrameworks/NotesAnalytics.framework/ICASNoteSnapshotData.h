
@interface ICASNoteSnapshotData : NSObject <AADataEventType> {
    NSArray * _noteSnapshotSummary;
}

@property (nonatomic, readonly) NSArray *noteSnapshotSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNoteSnapshotSummary:(id)arg1;
- (id)noteSnapshotSummary;
- (id)toDict;

@end
