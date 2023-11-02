
@interface SiriCoreSymptomsReporter : NSObject

+ (id)sharedInstance;

- (void)_getTypeForError:(id)arg1 completion:(id /* block */)arg2;
- (id)_processNameForPid:(int)arg1;
- (id)_subtypeContextStringFromContext:(id)arg1;
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(bool)arg5 triggerForIDSIdentifiers:(id)arg6;
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4 processIdentifier:(int)arg5 walkboutStatus:(bool)arg6 triggerForIDSIdentifiers:(id)arg7;
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4 processIdentifier:(int)arg5 walkboutStatus:(bool)arg6 triggerForIDSIdentifiers:(id)arg7 withPcap:(bool)arg8;
- (void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(bool)arg5;
- (void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4 walkboutStatus:(bool)arg5 withPcap:(bool)arg6;

@end
