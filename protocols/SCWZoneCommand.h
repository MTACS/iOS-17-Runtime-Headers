
@protocol SCWZoneCommand <NSObject, NSSecureCoding>

@required

- (void)executeWithZone:(id <SCWZoneModifying>)arg1;

@optional

- (bool)shouldDeferUpload;

@end
