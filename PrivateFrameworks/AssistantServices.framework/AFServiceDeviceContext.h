
@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assistantIdentifier;
    NSUUID * _identifier;
    NSString * _mediaRouteIdentifier;
    NSString * _mediaSystemIdentifier;
    NSDictionary * _metricsContext;
    long long  _proximity;
    NSString * _roomName;
    NSDictionary * _serializedContextByKey;
    NSString * _sharedUserID;
}

@property (nonatomic, readonly, copy) NSString *assistantIdentifier;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly, copy) NSString *mediaSystemIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metricsContext;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly, copy) NSString *roomName;
@property (nonatomic, readonly, copy) NSDictionary *serializedContextByKey;
@property (nonatomic, readonly, copy) NSString *sharedUserID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)assistantIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 assistantIdentifier:(id)arg2 mediaSystemIdentifier:(id)arg3 mediaRouteIdentifier:(id)arg4 sharedUserID:(id)arg5 roomName:(id)arg6 proximity:(long long)arg7 serializedContextByKey:(id)arg8 metricsContext:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)mediaRouteIdentifier;
- (id)mediaSystemIdentifier;
- (id)metricsContext;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)proximity;
- (id)roomName;
- (id)serializedContextByKey;
- (id)sharedUserID;

@end
