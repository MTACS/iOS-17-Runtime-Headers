
@protocol COMeshNodeDelegate <NSObject>

@optional

- (void)didActivateNode:(COMeshNode *)arg1;
- (void)didAddNode:(COMeshNode *)arg1;
- (void)didInvalidateNode:(COMeshNode *)arg1;
- (void)didRemoveNode:(COMeshNode *)arg1;
- (void)node:(COMeshNode *)arg1 didReceiveCommand:(COMeshCommand *)arg2;
- (void)node:(COMeshNode *)arg1 didReceiveError:(NSError *)arg2 forCommand:(COMeshCommand *)arg3;
- (void)node:(void *)arg1 didReceiveRequest:(void *)arg2 responseCallBack:(void *)arg3; // needs 3 arg types, found 9: COMeshNode *, COMeshRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshResponse *, NSError *, void*
- (void)node:(COMeshNode *)arg1 didReceiveResponse:(COMeshResponse *)arg2 toRequest:(COMeshRequest *)arg3;
- (void)node:(COMeshNode *)arg1 didSendCommand:(COMeshCommand *)arg2;
- (void)unknownNodeForCommand:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: COMeshCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshNode *, void*
- (void)unknownNodeForRequest:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: COMeshRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshNode *, void*

@end
