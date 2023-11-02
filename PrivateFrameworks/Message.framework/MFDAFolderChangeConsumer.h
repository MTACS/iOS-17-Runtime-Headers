
@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer> {
    MFConditionLock * _conditionLock;
    MFDAFolderChangeResult * _result;
}

- (void).cxx_destruct;
- (void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3;
- (id)init;
- (id)waitForResult;

@end
