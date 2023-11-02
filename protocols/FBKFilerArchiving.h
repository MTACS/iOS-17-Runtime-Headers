
@protocol FBKFilerArchiving <NSObject>

@required

- (void)commitAllFilesForForm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: <FBKFilerForm> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (NSArray *)deviceDataForSubmission;
- (bool)hasFilePromises;

@end
