
@protocol CAMPurgeableStorageContainerDelegate <CAMStorageContainerDelegate>

@required

- (void)storageControllerDidChangePurgingState:(id <CAMPurgeableStorageContainer>)arg1;

@end
