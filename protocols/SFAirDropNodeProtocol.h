
@protocol SFAirDropNodeProtocol <NSObject>

@required

- (CNContact *)contact;
- (NSString *)contactIdentifier;
- (struct CGImage { }*)displayIcon;
- (NSString *)displayName;
- (NSString *)displayNameForLocale:(NSLocale *)arg1;
- (NSUUID *)endpointUUID;
- (NSSet *)formattedHandles;
- (bool)isClassroom;
- (bool)isDisabled;
- (bool)isSuggestion;
- (NSString *)model;
- (NSUUID *)nodeIdentifier;
- (NSString *)realName;
- (long long)selectionReason;
- (void)setClassroom:(bool)arg1;
- (void)setContact:(CNContact *)arg1;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisplayIcon:(struct CGImage { }*)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setEndpointUUID:(NSUUID *)arg1;
- (void)setFormattedHandles:(NSSet *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setNodeIdentifier:(NSUUID *)arg1;
- (void)setRealName:(NSString *)arg1;
- (void)setSelectionReason:(long long)arg1;
- (void)setSuggestion:(bool)arg1;
- (void)setSuggestionIndex:(NSNumber *)arg1;
- (void)setTransportBundleID:(NSString *)arg1;
- (NSNumber *)suggestionIndex;
- (NSString *)transportBundleID;

@end
