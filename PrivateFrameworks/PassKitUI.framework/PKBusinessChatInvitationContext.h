
@interface PKBusinessChatInvitationContext : NSObject <PKBusinessChatContext> {
    PKAccount * _account;
    NSString * _businessChatIdentifier;
    NSArray * _featureApplications;
    PKFeatureApplication * _invitation;
    NSArray * _pendingInvitations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bodyText;
- (id)businessIdentifier;
- (id)groupParameters;
- (id)initWithBusinessChatIdentifier:(id)arg1 account:(id)arg2 invitation:(id)arg3 pendingInvitations:(id)arg4 featureApplications:(id)arg5;
- (id)intentParameters;
- (bool)requiresAuthorization;

@end
