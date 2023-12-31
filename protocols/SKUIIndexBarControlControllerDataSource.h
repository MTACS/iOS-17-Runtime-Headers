
@protocol SKUIIndexBarControlControllerDataSource <NSObject>

@required

- (SKUIIndexBarEntryDescriptor *)indexBarControlController:(SKUIIndexBarControlController *)arg1 entryDescriptorAtIndexPath:(NSIndexPath *)arg2;
- (long long)indexBarControlController:(SKUIIndexBarControlController *)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;

@optional

- (SKUIIndexBarEntryDescriptor *)combinedEntryDescriptorForIndexBarControlController:(SKUIIndexBarControlController *)arg1;
- (long long)numberOfSectionsInIndexBarControlController:(SKUIIndexBarControlController *)arg1;

@end
