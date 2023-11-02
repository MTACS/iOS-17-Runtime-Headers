
@protocol SFPeopleSuggestionProxy <SFProxy>

@required

- (unsigned int)avatarImageSlotID;
- (SFProxyText *)displayName;
- (<SFPeopleSuggestion> *)peopleSuggestion;
- (SFProxyText *)subtitle;
- (unsigned int)transportImageSlotID;

@end
