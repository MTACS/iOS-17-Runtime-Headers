
@protocol STCommunicationSafetyViewModelCoordinator <NSObject>

@required

- (void)persistCommunicationSafetySettingsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveCommunicationSafetyReceivingRestricted:(void *)arg1 communicationSafetySendingRestricted:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (STCommunicationSafetyViewModel *)viewModel;

@end
