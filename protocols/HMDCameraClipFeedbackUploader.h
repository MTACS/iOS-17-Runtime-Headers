
@protocol HMDCameraClipFeedbackUploader <NSObject>

@required

- (void)uploadFeedbackWithCameraProfileUUID:(void *)arg1 clipModel:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, HMDCameraClipModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
