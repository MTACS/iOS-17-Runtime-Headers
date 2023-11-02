
@interface CKTranscriptBalloonSelectionManager : NSObject <NSFastEnumeration> {
    <CKTranscriptBalloonSelectionManagerDataSource> * _dataSource;
    <CKTranscriptBalloonSelectionManagerDelegate> * _delegate;
    NSMutableOrderedSet * _selectedMessageGuids;
    NSMutableDictionary * _selectedStates;
    NSString * _trackedGuid;
}

@property (nonatomic, readonly) NSArray *chatItems;
@property (nonatomic) <CKTranscriptBalloonSelectionManagerDataSource> *dataSource;
@property (nonatomic) <CKTranscriptBalloonSelectionManagerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long selectedGuidCount;
@property (nonatomic, retain) NSMutableOrderedSet *selectedMessageGuids;
@property (nonatomic, retain) NSMutableDictionary *selectedStates;
@property (nonatomic, retain) NSString *trackedGuid;

- (void).cxx_destruct;
- (id)_chatItemForGUID:(id)arg1;
- (void)addSelectedMessageGuid:(id)arg1 selectionState:(id)arg2;
- (id)chatItems;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dataSource;
- (id)delegate;
- (long long)indexOfGuid:(id)arg1 inChatItems:(id)arg2;
- (id)init;
- (bool)isMessageGuidSelected:(id)arg1;
- (void)removeAllSelectedMessageGuids;
- (void)removeAllSelectedMessageGuidsExceptTrackedGuid;
- (void)removeSelectedMessageGuid:(id)arg1;
- (void)removeTrackedGuid;
- (id)selectedGuidAtIndex:(unsigned long long)arg1;
- (unsigned long long)selectedGuidCount;
- (id)selectedMessageGuids;
- (id)selectedStateForGuid:(id)arg1;
- (id)selectedStates;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedGuids:(id)arg1;
- (void)setSelectedMessageGuids:(id)arg1;
- (void)setSelectedStates:(id)arg1;
- (void)setTrackedGuid:(id)arg1;
- (void)trackSelectedGuid:(id)arg1 selectionState:(id)arg2;
- (id)trackedGuid;

@end
