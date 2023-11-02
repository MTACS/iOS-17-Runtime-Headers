
@interface MADVideoRemoveBackgroundPreviewRequest : MADVideoRequest

@property (nonatomic, readonly) MADVideoRemoveBackgroundPreviewResult *result;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)result;

@end
