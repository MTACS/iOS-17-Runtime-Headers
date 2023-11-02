
@interface ICASMiniSnapshotAccountItemData : NSObject <AADataEventType> {
    NSNumber * _counfOfFolders;
    NSNumber * _countOfAttachments;
    NSNumber * _countofNotes;
    NSString * _privateAccountID;
}

@property (nonatomic, readonly) NSNumber *counfOfFolders;
@property (nonatomic, readonly) NSNumber *countOfAttachments;
@property (nonatomic, readonly) NSNumber *countofNotes;
@property (nonatomic, readonly) NSString *privateAccountID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)counfOfFolders;
- (id)countOfAttachments;
- (id)countofNotes;
- (id)initWithCountofNotes:(id)arg1 counfOfFolders:(id)arg2 countOfAttachments:(id)arg3 privateAccountID:(id)arg4;
- (id)privateAccountID;
- (id)toDict;

@end
