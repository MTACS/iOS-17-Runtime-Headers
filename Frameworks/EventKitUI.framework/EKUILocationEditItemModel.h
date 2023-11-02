
@interface EKUILocationEditItemModel : NSObject {
    NSMutableDictionary * _conferenceRoomInfos;
    NSMutableArray * _rowModels;
}

@property (nonatomic, retain) NSMutableDictionary *conferenceRoomInfos;
@property (nonatomic, readonly) bool displaysPlaceholder;
@property (nonatomic, readonly) bool hasMapLocation;
@property (nonatomic, readonly) bool hasVirtualConference;
@property (nonatomic, readonly) EKUILocationRowModel *mapLocationRowModel;
@property (nonatomic, readonly) NSString *placeholderCellText;
@property (nonatomic, retain) NSMutableArray *rowModels;
@property (nonatomic, readonly) EKUILocationRowModel *virtualConferenceRowModel;

- (void).cxx_destruct;
- (id)_conferenceRoomNameForLocation:(id)arg1;
- (void)_deleteVirtualConferenceOnEvent:(id)arg1 forRowModel:(id)arg2;
- (id)_participantForConferenceRoomName:(id)arg1 event:(id)arg2;
- (void)_removeConferenceAttendeeOnEvent:(id)arg1 forRowModel:(id)arg2;
- (id)_rowModelForCell:(id)arg1;
- (void)_updateConferenceDataOnEvent:(id)arg1 forNewLocation:(id)arg2;
- (void)_updateLocationsOnEvent:(id)arg1;
- (id)conferenceRoomInfos;
- (bool)displaysPlaceholder;
- (bool)hasMapLocation;
- (bool)hasVirtualConference;
- (long long)indexOfPredictedLocation;
- (id)init;
- (id)mapLocationRowModel;
- (id)placeholderCellText;
- (void)rebuild:(id)arg1;
- (void)refreshConferenceRoomCell:(id)arg1 event:(id)arg2;
- (void)removeConferenceRoomAttendeeIfNeeded:(id)arg1 event:(id)arg2;
- (void)removeRowModel:(id)arg1 event:(id)arg2;
- (void)removeRowModelAtIndex:(unsigned long long)arg1 event:(id)arg2;
- (void)reorderRowModels;
- (void)reset;
- (bool)rowModelRepresentsConferenceRoom:(id)arg1 onEvent:(id)arg2;
- (id)rowModels;
- (void)setConferenceRoomInfos:(id)arg1;
- (void)setRowModels:(id)arg1;
- (bool)shouldDisplayRowModelWithConferenceCell:(id)arg1 event:(id)arg2;
- (void)updateAvailabilityInformation:(id)arg1;
- (void)updateRowModel:(id)arg1 withConferenceRoom:(id)arg2 editItem:(id)arg3;
- (void)updateRowModel:(id)arg1 withMapLocation:(id)arg2 event:(id)arg3;
- (void)updateRowModel:(id)arg1 withVirtualConference:(id)arg2 event:(id)arg3;
- (id)virtualConferenceRowModel;

@end
