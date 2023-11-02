
@interface BBContact : NSObject <NSCopying, NSSecureCoding> {
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

@property (readonly) BLTPBContact *blt_protobuf;
@property (nonatomic, readonly, copy) NSString *cnContactFullname;
@property (nonatomic, readonly, copy) NSString *cnContactIdentifier;
@property (getter=isCNContactIdentifierSuggested, nonatomic, readonly) bool cnContactIdentifierSuggested;
@property (nonatomic, readonly, copy) NSString *customDisplayName;
@property (nonatomic, readonly, copy) NSString *customHandle;
@property (nonatomic, readonly) long long customHandleType;
@property (nonatomic, readonly, copy) NSString *customIdentifier;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=isDisplayNameSuggested, nonatomic, readonly) bool displayNameSuggested;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) long long handleType;
@property (nonatomic, readonly, copy) NSString *serviceName;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

+ (id)contactWithCustomHandle:(id)arg1 customHandleType:(long long)arg2 serviceName:(id)arg3 customDisplayName:(id)arg4 cnContactIdentifier:(id)arg5 cnContactFullname:(id)arg6 cnContactIdentifierSuggested:(bool)arg7;
+ (id)contactWithHandle:(id)arg1 handleType:(long long)arg2 serviceName:(id)arg3 displayName:(id)arg4 cnContactIdentifier:(id)arg5 cnContactFullname:(id)arg6 cnContactIdentifierSuggested:(bool)arg7;
+ (id)contactWithHandle:(id)arg1 handleType:(long long)arg2 serviceName:(id)arg3 displayName:(id)arg4 customIdentifier:(id)arg5 cnContactIdentifier:(id)arg6 cnContactFullname:(id)arg7 cnContactIdentifierSuggested:(bool)arg8;
+ (id)contactWithHandle:(id)arg1 handleType:(long long)arg2 serviceName:(id)arg3 displayName:(id)arg4 displayNameSuggested:(bool)arg5 customIdentifier:(id)arg6 cnContactIdentifier:(id)arg7 cnContactFullname:(id)arg8 cnContactIdentifierSuggested:(bool)arg9;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)arg1 handleType:(long long)arg2 serviceName:(id)arg3 displayName:(id)arg4 displayNameSuggested:(bool)arg5 customIdentifier:(id)arg6 cnContactIdentifier:(id)arg7 cnContactFullname:(id)arg8 cnContactIdentifierSuggested:(bool)arg9;
- (id)cnContactFullname;
- (id)cnContactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDisplayName;
- (id)customHandle;
- (long long)customHandleType;
- (id)customIdentifier;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (long long)handleType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isCNContactIdentifierSuggested;
- (bool)isDisplayNameSuggested;
- (bool)isEqual:(id)arg1;
- (id)serviceName;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (id)contactFromProtobuf:(id)arg1;

- (id)blt_protobuf;

@end
