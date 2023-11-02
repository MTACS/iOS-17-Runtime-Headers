
@interface ICASDeviceSnapshotData : NSObject <AADataEventType> {
    NSArray * _accountTypeSummary;
    NSArray * _collabFoldersSummary;
    NSArray * _deviceSnapshotSummary;
    NSString * _saltVersion;
    NSNumber * _totalCountOfPinnedNotes;
    NSArray * _userSnapshotSummary;
    NSNumber * _userStartMonth;
    NSNumber * _userStartYear;
}

@property (nonatomic, readonly) NSArray *accountTypeSummary;
@property (nonatomic, readonly) NSArray *collabFoldersSummary;
@property (nonatomic, readonly) NSArray *deviceSnapshotSummary;
@property (nonatomic, readonly) NSString *saltVersion;
@property (nonatomic, readonly) NSNumber *totalCountOfPinnedNotes;
@property (nonatomic, readonly) NSArray *userSnapshotSummary;
@property (nonatomic, readonly) NSNumber *userStartMonth;
@property (nonatomic, readonly) NSNumber *userStartYear;

+ (id)dataName;

- (void).cxx_destruct;
- (id)accountTypeSummary;
- (id)collabFoldersSummary;
- (id)deviceSnapshotSummary;
- (id)initWithUserStartMonth:(id)arg1 userStartYear:(id)arg2 saltVersion:(id)arg3 accountTypeSummary:(id)arg4 collabFoldersSummary:(id)arg5 totalCountOfPinnedNotes:(id)arg6 deviceSnapshotSummary:(id)arg7 userSnapshotSummary:(id)arg8;
- (id)saltVersion;
- (id)toDict;
- (id)totalCountOfPinnedNotes;
- (id)userSnapshotSummary;
- (id)userStartMonth;
- (id)userStartYear;

@end
