
@interface _UNNotificationContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
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

@property (nonatomic, readonly, copy) NSString *cnContactFullname;
@property (nonatomic, readonly, copy) NSString *cnContactIdentifier;
@property (getter=isCNContactIdentifierSuggested, nonatomic, readonly) bool cnContactIdentifierSuggested;
@property (nonatomic, readonly, copy) NSString *customIdentifier;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=isDisplayNameSuggested, nonatomic, readonly) bool displayNameSuggested;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) long long handleType;
@property (nonatomic, readonly, copy) NSString *preferredName;
@property (getter=isPreferredNameReal, nonatomic, readonly) bool preferredNameReal;
@property (nonatomic, readonly, copy) NSString *serviceName;

+ (id)contactFromINPerson:(id)arg1 serviceName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithhandle:(id)arg1 handleType:(long long)arg2 serviceName:(id)arg3 displayName:(id)arg4 displayNameSuggested:(bool)arg5 customIdentifier:(id)arg6 cnContactIdentifier:(id)arg7 cnContactFullname:(id)arg8 cnContactIdentifierSuggested:(bool)arg9;
- (id)cnContactFullname;
- (id)cnContactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIdentifier;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (long long)handleType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isCNContactIdentifierSuggested;
- (bool)isDisplayNameSuggested;
- (bool)isEqual:(id)arg1;
- (bool)isPreferredNameReal;
- (bool)isSimilar:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredName;
- (id)serviceName;
- (unsigned long long)similarHash;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
