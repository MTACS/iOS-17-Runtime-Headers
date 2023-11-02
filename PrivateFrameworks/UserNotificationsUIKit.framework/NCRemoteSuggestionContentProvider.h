
@interface NCRemoteSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider {
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 uuid:(id)arg5;
- (id)uuid;

@end
