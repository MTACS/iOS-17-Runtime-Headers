
@protocol TSURandomWriteChannel <TSUIOChannel>

@required

- (void)writeData:(void *)arg1 offset:(void *)arg2 queue:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 11: NSObject<OS_dispatch_data> *, long long, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSObject<OS_dispatch_data> *, NSError *, void*

@end
