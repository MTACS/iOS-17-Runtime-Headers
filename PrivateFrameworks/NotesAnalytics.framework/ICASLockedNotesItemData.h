
@interface ICASLockedNotesItemData : NSObject <AADataEventType> {
    NSNumber * _totalCountOfLockedNotesWithDivergedMode;
    NSNumber * _totalCountOfLockedNotesWithDivergedPassword;
    NSNumber * _totalCountOfV1LockedNotes;
    NSNumber * _totalCountOfV2LockedNotes;
}

@property (nonatomic, readonly) NSNumber *totalCountOfLockedNotesWithDivergedMode;
@property (nonatomic, readonly) NSNumber *totalCountOfLockedNotesWithDivergedPassword;
@property (nonatomic, readonly) NSNumber *totalCountOfV1LockedNotes;
@property (nonatomic, readonly) NSNumber *totalCountOfV2LockedNotes;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTotalCountOfV1LockedNotes:(id)arg1 totalCountOfV2LockedNotes:(id)arg2 totalCountOfLockedNotesWithDivergedMode:(id)arg3 totalCountOfLockedNotesWithDivergedPassword:(id)arg4;
- (id)toDict;
- (id)totalCountOfLockedNotesWithDivergedMode;
- (id)totalCountOfLockedNotesWithDivergedPassword;
- (id)totalCountOfV1LockedNotes;
- (id)totalCountOfV2LockedNotes;

@end
