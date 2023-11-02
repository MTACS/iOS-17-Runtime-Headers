
@protocol AFConversationStorable <NSObject>

@required

- (NSString *)aceCommandIdentifier;
- (AceObject *)aceObject;
- (AFDataStore *)associatedDataStore;
- (AFDialogPhase *)dialogPhase;
- (NSUUID *)identifier;
- (bool)isImmersiveExperience;
- (bool)isSupplemental;
- (bool)isTransient;
- (bool)isVirgin;
- (long long)presentationState;
- (NSUUID *)revisionIdentifier;
- (long long)type;

@end
