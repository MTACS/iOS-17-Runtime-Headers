
@protocol MPMediaPickerControllerDelegate <NSObject>

@optional

- (void)mediaPicker:(MPMediaPickerController *)arg1 didPickMediaItems:(MPMediaItemCollection *)arg2;
- (void)mediaPickerDidCancel:(MPMediaPickerController *)arg1;

@end
