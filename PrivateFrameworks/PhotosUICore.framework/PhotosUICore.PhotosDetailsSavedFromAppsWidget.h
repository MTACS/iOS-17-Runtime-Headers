
@interface PhotosUICore.PhotosDetailsSavedFromAppsWidget : PhotosUICore.PhotosDetailsWidget

@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;

- (long long)contentLayoutStyle;
- (id)init;
- (id)snappableWidgetIdentifier;

@end
