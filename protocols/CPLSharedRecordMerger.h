
@protocol CPLSharedRecordMerger <NSObject>

@required

- (void)mergeRecord:(CPLRecordChange *)arg1 isSharedRecord:(bool)arg2 inPrivateRecord:(CPLRecordChange *)arg3;

@end
