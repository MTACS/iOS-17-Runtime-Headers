
@protocol BMWriteServiceServer

@required

- (void)configureConnectionForUseCase:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writeData:(void *)arg1 version:(void *)arg2 timestamp:(void *)arg3 toStream:(void *)arg4 asUser:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 11: NSData *, unsigned int, double, NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
