
@interface _SSScreenCaptureResults : NSObject {
    NSString * _failureReasonIfImageIsNil;
    UIImage * _image;
}

@property (nonatomic, copy) NSString *failureReasonIfImageIsNil;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)failureReasonIfImageIsNil;
- (id)image;
- (void)setFailureReasonIfImageIsNil:(id)arg1;
- (void)setImage:(id)arg1;

@end
