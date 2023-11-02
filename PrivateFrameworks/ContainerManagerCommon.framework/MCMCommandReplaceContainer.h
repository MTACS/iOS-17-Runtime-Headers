
@interface MCMCommandReplaceContainer : MCMCommand <MCMParametersReplace> {
    bool  _asyncReclaim;
    MCMConcreteContainerIdentity * _containerIdentityNew;
    MCMConcreteContainerIdentity * _containerIdentityOld;
    bool  _preserveOldInternalUUID;
    bool  _preserveOldPathIdentifier;
}

@property (nonatomic, readonly) bool asyncReclaim;
@property (nonatomic, readonly) MCMConcreteContainerIdentity *containerIdentityNew;
@property (nonatomic, readonly) MCMConcreteContainerIdentity *containerIdentityOld;
@property (nonatomic, readonly) bool preserveOldInternalUUID;
@property (nonatomic, readonly) bool preserveOldPathIdentifier;

+ (id)_readAndValidateReplaceFileAtUrl:(id)arg1 error:(id*)arg2;
+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (bool)recoverFromReplaceOperationsWithError:(id*)arg1;

- (void).cxx_destruct;
- (bool)_writeToDiskReplaceAt:(id)arg1 old:(id)arg2 withNew:(id)arg3 usingStaging:(id)arg4 toDestination:(id)arg5 error:(id*)arg6;
- (bool)asyncReclaim;
- (id)containerIdentityNew;
- (id)containerIdentityOld;
- (void)execute;
- (id)initWithConcreteContainerIdentityOld:(id)arg1 concreteContainerIdentityNew:(id)arg2 preserveOldPathIdentifier:(bool)arg3 preserveOldInternalUUID:(bool)arg4 asyncReclaim:(bool)arg5 context:(id)arg6 resultPromise:(id)arg7;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)preflightClientAllowed;
- (bool)preserveOldInternalUUID;
- (bool)preserveOldPathIdentifier;

@end
