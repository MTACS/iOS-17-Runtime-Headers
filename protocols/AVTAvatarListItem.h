
@protocol AVTAvatarListItem <NSObject>

@required

- (void)downcastWithRecordHandler:(void *)arg1 imageHandler:(void *)arg2 viewHandler:(void *)arg3; // needs 3 arg types, found 18: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVTAvatarListRecordItem *, void*, id /* block */, void*, void, id /* block */, AVTAvatarListImageItem *, void*, id /* block */, void*, void, id /* block */, AVTAvatarListViewItem *, void*
- (void)downcastWithRecordHandler:(void *)arg1 viewHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVTAvatarListRecordItem *, void*, id /* block */, void*, void, id /* block */, AVTAvatarListViewItem *, void*

@end
