
@protocol FBKFilerForm <NSObject>

@required

- (bool)collectsFiles;
- (NSNumber *)filerFormID;
- (long long)filerFormType;
- (bool)isServerSideComplete;
- (NSSet *)matcherPredicates;
- (bool)needsRefresh;
- (NSString *)platform;
- (NSSet *)promises;
- (void)setFilerFormType:(long long)arg1;
- (void)setUploadTask:(FBKUploadTask *)arg1;
- (FBKUploadTask *)uploadTask;

@end
