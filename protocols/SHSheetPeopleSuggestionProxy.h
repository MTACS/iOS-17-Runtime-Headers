
@protocol SHSheetPeopleSuggestionProxy <SHSheetProxy>

@required

- (unsigned int)avatarImageSlotID;
- (SFProxyText *)displayName;
- (bool)isTapToRadar;
- (<SFPeopleSuggestion> *)peopleSuggestion;
- (SFProxyText *)subtitle;
- (unsigned int)transportImageSlotID;

@end
