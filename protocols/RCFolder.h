
@protocol RCFolder <NSFetchRequestResult>

@required

- (bool)containsRecording:(id <RCRecording>)arg1;
- (<RCFolderIdentifier> *)folderControllerID;
- (long long)folderType;
- (NSString *)name;
- (long long)rank;
- (NSString *)uuid;

@end
