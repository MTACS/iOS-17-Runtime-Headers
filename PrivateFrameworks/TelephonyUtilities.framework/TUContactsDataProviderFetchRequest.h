
@interface TUContactsDataProviderFetchRequest : NSObject {
    NSArray * _auxiliaryKeysToFetch;
    bool  _blocked;
    NSString * _contactIdentifier;
    bool  _conversation;
    bool  _emergency;
    NSArray * _handles;
    bool  _incoming;
    NSString * _isoCountryCode;
    NSString * _phoneNumberPrefixHint;
    bool  _useNetworkCountryCode;
    bool  _verified;
}

@property (nonatomic, copy) NSArray *auxiliaryKeysToFetch;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (getter=isConversation, nonatomic, readonly) bool conversation;
@property (getter=isEmergency, nonatomic, readonly) bool emergency;
@property (nonatomic, copy) NSArray *handles;
@property (getter=isIncoming, nonatomic, readonly) bool incoming;
@property (nonatomic, readonly, copy) NSString *isoCountryCode;
@property (nonatomic, copy) NSString *phoneNumberPrefixHint;
@property (nonatomic) bool useNetworkCountryCode;
@property (getter=isVerified, nonatomic, readonly) bool verified;

- (void).cxx_destruct;
- (id)auxiliaryKeysToFetch;
- (id)contactIdentifier;
- (id)description;
- (id)handles;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithHandles:(id)arg1;
- (bool)isBlocked;
- (bool)isConversation;
- (bool)isEmergency;
- (bool)isIncoming;
- (bool)isVerified;
- (id)isoCountryCode;
- (id)phoneNumberPrefixHint;
- (void)removePsuedHandles;
- (void)setAuxiliaryKeysToFetch:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setPhoneNumberPrefixHint:(id)arg1;
- (void)setUseNetworkCountryCode:(bool)arg1;
- (bool)useNetworkCountryCode;

@end
