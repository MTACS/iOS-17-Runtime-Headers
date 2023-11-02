
@interface SRUIFConversationItem : NSObject <NSCopying, SRUIFConversationStorable> {
    SRUIFMutableConversationItem * _delegateItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (id)associatedDataStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialogPhase;
- (id)identifier;
- (id)initWithDelegateItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(bool)arg8 transient:(bool)arg9 supplemental:(bool)arg10 immersiveExperience:(bool)arg11 associatedDataStore:(id)arg12;
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(bool)arg6 transient:(bool)arg7 supplemental:(bool)arg8 immersiveExperience:(bool)arg9 associatedDataStore:(id)arg10;
- (bool)isImmersiveExperience;
- (bool)isSupplemental;
- (bool)isTransient;
- (bool)isVirgin;
- (long long)presentationState;
- (id)revisionIdentifier;
- (long long)type;

@end
