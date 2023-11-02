
@protocol PRUIExternallyHostedPosterEditingRequest <NSObject, BSXPCSecureCoding, NSCopying>

@required

- (<PRUIModalEntryPoint> *)entryPoint;
- (NSUUID *)requestUUID;

@end
