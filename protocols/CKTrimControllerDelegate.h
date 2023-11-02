
@protocol CKTrimControllerDelegate <NSObject>

@required

- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(CKMediaObject *)arg2 withReplacementMediaObject:(CKMediaObject *)arg3;
- (void)trimControllerDidCancel:(id)arg1;

@end
