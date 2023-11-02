
@protocol CSApplicationInformationObserving <NSObject>

@required

- (void)applicationInformer:(id <CSApplicationInforming>)arg1 updatedApplications:(NSSet *)arg2;

@end
