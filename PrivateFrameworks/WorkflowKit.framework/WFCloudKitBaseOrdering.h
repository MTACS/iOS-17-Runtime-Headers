
@interface WFCloudKitBaseOrdering : NSObject <WFCloudKitOrdering> {
    CKRecordID * _identifier;
    NSArray * _orderedFolderIDsArray;
    NSArray * _orderedWorkflowIDsArray;
    NSData * _recordSystemFieldsData;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, readonly) NSOrderedSet *orderedFolderIDs;
@property (nonatomic, readonly) NSArray *orderedFolderIDsArray;
@property (nonatomic, readonly) NSOrderedSet *orderedWorkflowIDs;
@property (nonatomic, readonly) NSArray *orderedWorkflowIDsArray;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;

+ (id)collectionIdentifierForRecordID:(id)arg1;
+ (id)properties;
+ (id)recordBasename;
+ (id)recordType;

- (void).cxx_destruct;
- (id)collectionIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 orderedWorkflowIDs:(id)arg2 orderedFolderIDs:(id)arg3;
- (id)orderedFolderIDs;
- (id)orderedFolderIDsArray;
- (id)orderedWorkflowIDs;
- (id)orderedWorkflowIDsArray;
- (id)recordSystemFieldsData;
- (void)setRecordSystemFieldsData:(id)arg1;

@end
