
@protocol MPMusicMediaPickerClientController <NSObject>

@required

- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(MPMediaItemCollection *)arg1;
- (void)remoteMediaPickerDidPickPlaybackArchive:(MPPlaybackArchive *)arg1;

@end
