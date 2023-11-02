
@interface ICASFolderData : NSObject <AADataEventType> {
    ICASCollaborationStatus * _collaborationStatus;
    ICASCollaborationType * _collaborationType;
    NSString * _folderID;
    ICASFolderLabelType * _folderLabelType;
    ICASFolderType * _folderType;
    NSNumber * _subFolderLevel;
}

@property (nonatomic, readonly) ICASCollaborationStatus *collaborationStatus;
@property (nonatomic, readonly) ICASCollaborationType *collaborationType;
@property (nonatomic, readonly) NSString *folderID;
@property (nonatomic, readonly) ICASFolderLabelType *folderLabelType;
@property (nonatomic, readonly) ICASFolderType *folderType;
@property (nonatomic, readonly) NSNumber *subFolderLevel;

+ (id)dataName;

- (void).cxx_destruct;
- (id)collaborationStatus;
- (id)collaborationType;
- (id)folderID;
- (id)folderLabelType;
- (id)folderType;
- (id)initWithFolderID:(id)arg1 folderType:(id)arg2 folderLabelType:(id)arg3 subFolderLevel:(id)arg4 collaborationStatus:(id)arg5 collaborationType:(id)arg6;
- (id)subFolderLevel;
- (id)toDict;

@end
