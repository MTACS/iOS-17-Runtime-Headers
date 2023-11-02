
@interface AFAudioSessionCoordinationSystemInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSUUID * _homeKitMediaSystemIdentifier;
    NSString * _homeKitRoomName;
    bool  _isSupportedAndEnabled;
    NSString * _mediaRemoteGroupIdentifier;
    NSString * _mediaRemoteRouteIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *homeKitMediaSystemIdentifier;
@property (nonatomic, readonly, copy) NSString *homeKitRoomName;
@property (nonatomic, readonly) bool isSupportedAndEnabled;
@property (nonatomic, readonly, copy) NSString *mediaRemoteGroupIdentifier;
@property (nonatomic, readonly, copy) NSString *mediaRemoteRouteIdentifier;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeKitMediaSystemIdentifier;
- (id)homeKitRoomName;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIsSupportedAndEnabled:(bool)arg1 homeKitRoomName:(id)arg2 homeKitMediaSystemIdentifier:(id)arg3 mediaRemoteGroupIdentifier:(id)arg4 mediaRemoteRouteIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isSupportedAndEnabled;
- (id)mediaRemoteGroupIdentifier;
- (id)mediaRemoteRouteIdentifier;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
