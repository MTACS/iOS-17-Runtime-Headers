
@interface SFPeopleSuggestionProxy : NSObject <NSSecureCoding, SFLoadableProxy, SFPeopleSuggestionProxy> {
    _Atomic unsigned int  _avatarImageSlotID;
    bool  _disabled;
    SFProxyText * _displayName;
    NSUUID * _identifier;
    id /* block */  _loadHandler;
    <SFPeopleSuggestion> * _peopleSuggestion;
    SFProxyText * _subtitle;
    SDSuggestionNode * _suggestionNode;
    _Atomic unsigned int  _transportImageSlotID;
}

@property unsigned int avatarImageSlotID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic, retain) SFProxyText *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isDisabled;
@property (nonatomic, copy) id /* block */ loadHandler;
@property (nonatomic, retain) <SFPeopleSuggestion> *peopleSuggestion;
@property (nonatomic, retain) SFProxyText *subtitle;
@property (nonatomic, retain) SDSuggestionNode *suggestionNode;
@property (readonly) Class superclass;
@property unsigned int transportImageSlotID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)avatarImageSlotID;
- (id)description;
- (bool)disabled;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeopleSuggestion:(id)arg1;
- (id)initWithSuggestionNode:(id)arg1;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)load;
- (id /* block */)loadHandler;
- (id)peopleSuggestion;
- (void)setAvatarImageSlotID:(unsigned int)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLoadHandler:(id /* block */)arg1;
- (void)setPeopleSuggestion:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuggestionNode:(id)arg1;
- (void)setTransportImageSlotID:(unsigned int)arg1;
- (id)subtitle;
- (id)suggestionNode;
- (unsigned int)transportImageSlotID;

@end
