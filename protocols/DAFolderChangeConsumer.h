
@protocol DAFolderChangeConsumer

@required

- (void)folderChange:(DAFolderChange *)arg1 finishedWithStatus:(long long)arg2 error:(NSError *)arg3;

@end
