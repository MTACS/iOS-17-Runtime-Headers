
@protocol VCScreenCapturePickerDelegate <NSObject>

@required

- (void)picker:(VCScreenCapturePicker *)arg1 pickedContentFilter:(SCContentFilter *)arg2 forStream:(SCStream *)arg3 error:(NSError *)arg4;

@end
