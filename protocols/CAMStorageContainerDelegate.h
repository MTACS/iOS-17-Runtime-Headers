
@protocol CAMStorageContainerDelegate <NSObject>

@required

- (void)availableDiskSpaceChanged:(id <CAMStorageContainer>)arg1;

@end
