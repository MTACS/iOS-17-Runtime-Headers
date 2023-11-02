
@interface ICASFolderSnapshotItemData : NSObject <AADataEventType> {
    ICASCollaborationStatus * _collaborationStatus;
    ICASCollaborationType * _collaborationType;
    NSNumber * _countOfAcceptances;
    NSNumber * _countOfInvitees;
    NSNumber * _directNoteCount;
    NSString * _folderID;
    ICASFolderLabelType * _folderLabelType;
    ICASFolderType * _folderType;
    NSNumber * _totalNoteCount;
}

@property (nonatomic, readonly) ICASCollaborationStatus *collaborationStatus;
@property (nonatomic, readonly) ICASCollaborationType *collaborationType;
@property (nonatomic, readonly) NSNumber *countOfAcceptances;
@property (nonatomic, readonly) NSNumber *countOfInvitees;
@property (nonatomic, readonly) NSNumber *directNoteCount;
@property (nonatomic, readonly) NSString *folderID;
@property (nonatomic, readonly) ICASFolderLabelType *folderLabelType;
@property (nonatomic, readonly) ICASFolderType *folderType;
@property (nonatomic, readonly) NSNumber *totalNoteCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)collaborationStatus;
- (id)collaborationType;
- (id)countOfAcceptances;
- (id)countOfInvitees;
- (id)directNoteCount;
- (id)folderID;
- (id)folderLabelType;
- (id)folderType;
- (id)initWithFolderID:(id)arg1 collaborationStatus:(id)arg2 collaborationType:(id)arg3 countOfInvitees:(id)arg4 countOfAcceptances:(id)arg5 directNoteCount:(id)arg6 totalNoteCount:(id)arg7 folderType:(id)arg8 folderLabelType:(id)arg9;
- (id)toDict;
- (id)totalNoteCount;

@end
