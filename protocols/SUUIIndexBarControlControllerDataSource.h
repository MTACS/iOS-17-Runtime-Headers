
@protocol SUUIIndexBarControlControllerDataSource <NSObject>

@required

- (SUUIIndexBarEntryDescriptor *)indexBarControlController:(SUUIIndexBarControlController *)arg1 entryDescriptorAtIndexPath:(NSIndexPath *)arg2;
- (long long)indexBarControlController:(SUUIIndexBarControlController *)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;

@optional

- (SUUIIndexBarEntryDescriptor *)combinedEntryDescriptorForIndexBarControlController:(SUUIIndexBarControlController *)arg1;
- (long long)numberOfSectionsInIndexBarControlController:(SUUIIndexBarControlController *)arg1;

@end
