
@protocol CXVoicemailControllerHostProtocol <NSObject>

@required

- (oneway void)requestTransaction:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)requestVoicemails:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
