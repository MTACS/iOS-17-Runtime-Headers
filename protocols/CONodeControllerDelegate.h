
@protocol CONodeControllerDelegate <NSObject>

@optional

- (void)backedOffNodeMovedOutOfElection:(CONodeController *)arg1;
- (void)nodeController:(CONodeController *)arg1 didAddTransport:(id <COTransportProtocol>)arg2;
- (void)nodeController:(CONodeController *)arg1 didReceiveCommand:(COMeshCommand *)arg2;
- (void)nodeController:(void *)arg1 didReceiveElectionCmd:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: CONodeController *, <COMeshBaseBallotCommandProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COElectionInfo *, void*
- (void)nodeController:(CONodeController *)arg1 didReceiveError:(NSError *)arg2 forCommand:(COMeshCommand *)arg3;
- (void)nodeController:(CONodeController *)arg1 didReceiveOnDemandNodeCreationRequest:(COUnhandledRapportRequest *)arg2;
- (void)nodeController:(void *)arg1 didReceiveRequest:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 9: CONodeController *, COMeshRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshResponse *, NSError *, void*
- (void)nodeController:(CONodeController *)arg1 didRemoveTransport:(id <COTransportProtocol>)arg2 withError:(NSError *)arg3;
- (void)nodeController:(CONodeController *)arg1 didUpdateRemoteConstituent:(COConstituent *)arg2 to:(COConstituent *)arg3;
- (void)nodeController:(CONodeController *)arg1 didUpdateState:(long long)arg2 to:(long long)arg3 reason:(long long)arg4 withLastSentElectionInfo:(COElectionInfo *)arg5;

@end
