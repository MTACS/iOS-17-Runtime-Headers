
@protocol GDEventLogServiceXPCProtocol

@required

- (void)logEndWithId:(void *)arg1 timestamp:(void *)arg2 dependencies:(void *)arg3 payloadType:(void *)arg4 payloadVariant:(void *)arg5 payload:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: long long, NSDate *, NSArray *, NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)logInstantWithId:(void *)arg1 timestamp:(void *)arg2 name:(void *)arg3 parent:(void *)arg4 dependencies:(void *)arg5 payloadType:(void *)arg6 payloadVariant:(void *)arg7 payload:(void *)arg8 completion:(void *)arg9; // needs 9 arg types, found 15: long long, NSDate *, NSString *, long long, NSArray *, NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)logStartWithId:(void *)arg1 timestamp:(void *)arg2 name:(void *)arg3 parent:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: long long, NSDate *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
