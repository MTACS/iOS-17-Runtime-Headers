
@interface AFMutableConversationItem : NSObject <AFConversationStorable, NSCopying> {
    NSString * _aceCommandIdentifier;
    AceObject * _aceObject;
    AFDataStore * _associatedDataStore;
    AFDialogPhase * _dialogPhase;
    NSUUID * _identifier;
    bool  _immersiveExperience;
    long long  _presentationState;
    NSUUID * _revisionIdentifier;
    bool  _supplemental;
    bool  _transient;
    long long  _type;
    bool  _virgin;
}

@property (nonatomic, copy) NSString *aceCommandIdentifier;
@property (nonatomic, retain) AceObject *aceObject;
@property (nonatomic, readonly) AFDataStore *associatedDataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AFDialogPhase *dialogPhase;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (getter=isImmersiveExperience, nonatomic) bool immersiveExperience;
@property (nonatomic) long long presentationState;
@property (nonatomic, readonly, copy) NSUUID *revisionIdentifier;
@property (readonly) Class superclass;
@property (getter=isSupplemental, nonatomic) bool supplemental;
@property (getter=isTransient, nonatomic) bool transient;
@property (nonatomic) long long type;
@property (getter=isVirgin, nonatomic) bool virgin;

- (void).cxx_destruct;
- (void)_didMutate;
- (long long)_presentationStateForPropertyListString:(id)arg1;
- (id)_propertyListStringForPresentationState;
- (id)_propertyListStringForType;
- (bool)_shouldRedactSpeakableText;
- (long long)_typeForPropertyListString:(id)arg1;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (id)associatedDataStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialogPhase;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(bool)arg8 transient:(bool)arg9 supplemental:(bool)arg10 immersiveExperience:(bool)arg11 associatedDataStore:(id)arg12;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(long long)arg5 aceCommandIdentifier:(id)arg6 virgin:(bool)arg7 transient:(bool)arg8 supplemental:(bool)arg9 immersiveExperience:(bool)arg10 associatedDataStore:(id)arg11;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(bool)arg6 transient:(bool)arg7 supplemental:(bool)arg8 immersiveExperience:(bool)arg9 associatedDataStore:(id)arg10;
- (bool)isImmersiveExperience;
- (bool)isSupplemental;
- (bool)isTransient;
- (bool)isVirgin;
- (long long)presentationState;
- (id)propertyListRepresentation;
- (id)revisionIdentifier;
- (void)setAceCommandIdentifier:(id)arg1;
- (void)setAceObject:(id)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setImmersiveExperience:(bool)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setSupplemental:(bool)arg1;
- (void)setTransient:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setVirgin:(bool)arg1;
- (long long)type;

@end
