
@protocol DEDFinisherState <NSObject>

@required

- (NSDictionary *)additionalStateInfo;
- (bool)isCompressing;
- (bool)isUploading;

@end
