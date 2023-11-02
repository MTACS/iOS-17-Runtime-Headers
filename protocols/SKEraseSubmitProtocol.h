
@protocol SKEraseSubmitProtocol <NSObject>

@required

- (NSProgress *)eraseProgressReportingWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKDisk *, NSError *, void*
- (void)eraseWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKDisk *, NSError *, void*
- (bool)forceUnmount;
- (void)setForceUnmount:(bool)arg1;

@end
