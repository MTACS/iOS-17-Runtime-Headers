
@protocol IRPersistenceSynchronizable <NSObject>

@required

- (void)synchronizeAndFetchFromDBOnDisk;

@end
