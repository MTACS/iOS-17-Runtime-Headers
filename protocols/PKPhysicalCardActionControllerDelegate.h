
@protocol PKPhysicalCardActionControllerDelegate <NSObject>

@required

- (void)physicalCardActionController:(PKPhysicalCardActionController *)arg1 didChangeToState:(long long)arg2 withError:(NSError *)arg3;
- (NSString *)presentationSceneIdentifierForPhysicalCardActionController:(PKPhysicalCardActionController *)arg1;

@end
