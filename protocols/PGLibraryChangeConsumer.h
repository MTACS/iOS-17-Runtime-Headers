
@protocol PGLibraryChangeConsumer <NSObject>

@required

- (void)incrementalChangeNotAvailable;
- (void)libraryChangesAvailable:(NSArray *)arg1;

@end
