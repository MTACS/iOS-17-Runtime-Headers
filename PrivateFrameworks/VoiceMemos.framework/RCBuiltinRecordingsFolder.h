
@interface RCBuiltinRecordingsFolder : NSObject <RCFolder> {
    long long  _folderType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <RCFolderIdentifier> *folderControllerID;
@property (nonatomic, readonly) long long folderType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long rank;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (id)allBuiltInFolders;
+ (id)builtInFolderWithType:(long long)arg1;

- (bool)containsRecording:(id)arg1;
- (id)description;
- (id)folderControllerID;
- (long long)folderType;
- (id)initWithType:(long long)arg1;
- (id)name;
- (long long)rank;
- (id)uuid;

@end
