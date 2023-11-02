
@interface RCRecordingsFolder : NSManagedObject <RCMutableFolder>

@property (nonatomic, readonly) long long countOfRecordings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *encryptedName;
@property (nonatomic, readonly) <RCFolderIdentifier> *folderControllerID;
@property (nonatomic, readonly) long long folderType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long rank;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uuid;

+ (id)keyPathsForValuesAffectingCount;

- (void)addRecording:(id)arg1;
- (bool)containsRecording:(id)arg1;
- (id)folderControllerID;
- (long long)folderType;
- (id)initWithContext:(id)arg1 name:(id)arg2 rank:(long long)arg3 uuid:(id)arg4;
- (id)name;
- (void)removeRecording:(id)arg1;
- (void)setName:(id)arg1;

@end
