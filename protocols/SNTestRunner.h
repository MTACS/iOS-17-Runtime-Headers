
@protocol SNTestRunner <NSObject>

@required

- (bool)runExtendedLaunchTest;
- (bool)runTest:(NSString *)arg1 options:(NSDictionary *)arg2;
- (bool)runTest:(void *)arg1 options:(void *)arg2 fallingBackWith:(void *)arg3; // needs 3 arg types, found 7: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*

@end
