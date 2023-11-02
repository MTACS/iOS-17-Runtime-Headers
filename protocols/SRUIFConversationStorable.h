
@protocol SRUIFConversationStorable <NSObject>

@required

- (NSString *)aceCommandIdentifier;
- (AceObject *)aceObject;
- (SRUIFDataStore *)associatedDataStore;
- (SRUIFDialogPhase *)dialogPhase;
- (NSUUID *)identifier;
- (bool)isImmersiveExperience;
- (bool)isSupplemental;
- (bool)isTransient;
- (bool)isVirgin;
- (long long)presentationState;
- (NSUUID *)revisionIdentifier;
- (long long)type;

@end
