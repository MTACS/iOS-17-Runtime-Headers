
@interface UNSContactRecord : NSObject <NSCopying> {
    NSString * _cnContactFullname;
    NSString * _cnContactIdentifier;
    bool  _cnContactIdentifierSuggested;
    NSString * _customIdentifier;
    NSString * _displayName;
    bool  _displayNameSuggested;
    NSString * _handle;
    long long  _handleType;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *cnContactFullname;
@property (nonatomic, copy) NSString *cnContactIdentifier;
@property (getter=isCNContactIdentifierSuggested, nonatomic) bool cnContactIdentifierSuggested;
@property (nonatomic, copy) NSString *customIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (getter=isDisplayNameSuggested, nonatomic) bool displayNameSuggested;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) long long handleType;
@property (nonatomic, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)cnContactFullname;
- (id)cnContactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)handle;
- (long long)handleType;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isCNContactIdentifierSuggested;
- (bool)isDisplayNameSuggested;
- (bool)isEqual:(id)arg1;
- (id)serviceName;
- (void)setCnContactFullname:(id)arg1;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setCnContactIdentifierSuggested:(bool)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameSuggested:(bool)arg1;
- (void)setHandle:(id)arg1;
- (void)setHandleType:(long long)arg1;
- (void)setServiceName:(id)arg1;

@end
