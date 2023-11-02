
@interface HMIFeedbackClipMetadata : HMFObject {
    NSDictionary * _cameraMetadata;
    NSDictionary * _clipMetadata;
    NSDictionary * _homeMetadata;
}

@property (readonly) NSDictionary *cameraMetadata;
@property (readonly) NSDictionary *clipMetadata;
@property (readonly) NSDictionary *homeMetadata;

- (void).cxx_destruct;
- (id)cameraMetadata;
- (id)clipMetadata;
- (id)homeMetadata;
- (id)initWithClipMetadata:(id)arg1 cameraMetadata:(id)arg2 homeMetadata:(id)arg3;

@end
