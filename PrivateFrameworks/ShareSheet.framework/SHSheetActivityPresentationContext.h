
@interface SHSheetActivityPresentationContext : NSObject {
    bool  _isCloudSharing;
    bool  _shouldDismissBeforePresentation;
    bool  _shouldPresentOverCurrentContext;
}

@property (nonatomic) bool isCloudSharing;
@property (nonatomic) bool shouldDismissBeforePresentation;
@property (nonatomic) bool shouldPresentOverCurrentContext;

- (id)description;
- (bool)isCloudSharing;
- (void)setIsCloudSharing:(bool)arg1;
- (void)setShouldDismissBeforePresentation:(bool)arg1;
- (void)setShouldPresentOverCurrentContext:(bool)arg1;
- (bool)shouldDismissBeforePresentation;
- (bool)shouldPresentOverCurrentContext;

@end
