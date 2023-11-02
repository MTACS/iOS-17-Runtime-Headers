
@interface NSDocumentDifferenceSizeTriple : NSObject {
    NSDocumentDifferenceSize * _betweenPreservingPreviousVersionAndSaving;
    NSDocumentDifferenceSize * _betweenPreviousSavingAndSaving;
    NSDocumentDifferenceSize * _dueToRecentChangesBeforeSaving;
}

@property (nonatomic, readonly) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving;
@property (nonatomic, readonly) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving;
@property (nonatomic, readonly) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving;

- (void).cxx_destruct;
- (id)betweenPreservingPreviousVersionAndSaving;
- (id)betweenPreviousSavingAndSaving;
- (id)description;
- (id)dueToRecentChangesBeforeSaving;
- (id)init;

@end
