
@protocol NTKArgonFetcherProviding <NSObject>

@required

- (void)fetchNewRecordsSinceChangeToken:(void *)arg1 forReason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSData *, NSError *, void*

@end
