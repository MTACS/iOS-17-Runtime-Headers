
@protocol EMDaemonInterfaceXPC <NSObject>

@required

- (void)getAccountRepositoryInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMAccountRepositoryInterface> *, void*
- (void)getActivityRegistryInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMActivityRegistryInterface> *, void*
- (void)getClientStateInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMClientStateInterface> *, void*
- (void)getDiagnosticInfoGathererInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMDiagnosticInfoGathererInterface> *, void*
- (void)getFetchControllerInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMFetchControllerInterface> *, void*
- (void)getInteractionLoggerInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMInteractionLoggerInterface> *, void*
- (void)getMailboxRepositoryInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMMailboxRepositoryInterface> *, void*
- (void)getMessageRepositoryInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMMessageRepositoryInterface> *, void*
- (void)getOutgoingMessageRepositoryInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMOutgoingMessageRepositoryInterface> *, void*
- (void)getSearchableIndexInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMSearchableIndexInterface> *, void*
- (void)getSenderRepositoryInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMSenderRepositoryInterface> *, void*
- (void)getVIPManagerInterface:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EMVIPManagerInterface> *, void*
- (void)launchForAppLaunch:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)launchForEarlyRecovery:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setAllowsBackgroundResume:(bool)arg1;

@end
