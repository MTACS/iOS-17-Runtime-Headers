
@protocol CSLPRFApplicationLibraryObserving <NSObject>

@required

- (void)applicationLibrary:(id <CSLPRFApplicationLibrary>)arg1 didAddApplications:(NSArray *)arg2;
- (void)applicationLibrary:(id <CSLPRFApplicationLibrary>)arg1 didRemoveApplications:(NSArray *)arg2;
- (void)applicationLibrary:(id <CSLPRFApplicationLibrary>)arg1 didUpdateApplications:(NSArray *)arg2;

@end
