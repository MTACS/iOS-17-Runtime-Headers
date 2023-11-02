
@interface _UNMutableNotificationContact : _UNNotificationContact

@property (nonatomic, copy) NSString *cnContactFullname;
@property (nonatomic, copy) NSString *cnContactIdentifier;
@property (getter=isCNContactIdentifierSuggested, nonatomic) bool cnContactIdentifierSuggested;
@property (nonatomic, copy) NSString *customIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (getter=isDisplayNameSuggested, nonatomic) bool displayNameSuggested;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) long long handleType;
@property (nonatomic, copy) NSString *serviceName;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
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
