
@protocol VGOEMApplicationFinding <NSObject>

@required

- (<VGOEMApplicationFinderUpdates> *)delegate;
- (void)findOEMApplications;
- (void)setDelegate:(id <VGOEMApplicationFinderUpdates>)arg1;

@end
