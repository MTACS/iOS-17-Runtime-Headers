
@protocol CXVoicemailControllerHostConnectionDelegate <NSObject>

@required

- (void)voicemailControllerHostConnection:(void *)arg1 requestTransaction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CXVoicemailControllerHostConnection *, CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)voicemailControllerHostConnection:(void *)arg1 requestVoicemails:(void *)arg2; // needs 2 arg types, found 7: CXVoicemailControllerHostConnection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)voicemailControllerHostConnectionInvalidated:(CXVoicemailControllerHostConnection *)arg1;

@end
