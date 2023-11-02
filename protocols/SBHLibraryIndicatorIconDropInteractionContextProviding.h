
@protocol SBHLibraryIndicatorIconDropInteractionContextProviding <NSObject>

@required

- (void)handleSpringLoadDidActivateForLibraryIndicatorIconView:(SBIconView *)arg1;
- (SBHIconModel *)iconModelForDroppingIntoLibraryIndicatorIconView:(SBIconView *)arg1;
- (void)libraryIndicatorIconView:(SBIconView *)arg1 didAcceptDropForSession:(id <UIDropSession>)arg2;

@end
