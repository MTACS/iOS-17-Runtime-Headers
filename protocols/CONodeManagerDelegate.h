
@protocol CONodeManagerDelegate <NSObject>

@optional

- (void)didAddNode:(COMeshNode *)arg1;
- (void)didCompleteElection;
- (void)didRemoveNode:(COMeshNode *)arg1;
- (void)didStartElection;
- (void)node:(COMeshNode *)arg1 didReceiveCommand:(COMeshCommand *)arg2;
- (void)node:(COMeshNode *)arg1 didReceiveError:(NSError *)arg2 forCommand:(COMeshCommand *)arg3;
- (void)node:(void *)arg1 didReceiveRequest:(void *)arg2 responseCallBack:(void *)arg3; // needs 3 arg types, found 9: COMeshNode *, COMeshRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshResponse *, NSError *, void*
- (void)node:(COMeshNode *)arg1 didReceiveResponse:(COMeshResponse *)arg2 toRequest:(COMeshRequest *)arg3;
- (void)node:(COMeshNode *)arg1 didSendCommand:(COMeshCommand *)arg2;

@end
