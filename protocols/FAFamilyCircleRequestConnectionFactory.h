
@protocol FAFamilyCircleRequestConnectionFactory <NSObject>

@required

- (NSXPCConnection *)createServiceConnectionWithInterruptionHandler:(void *)arg1 invalidationHandler:(void *)arg2; // needs 2 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*

@end
