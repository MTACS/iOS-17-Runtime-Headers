
@interface AFAudioSessionCoordinationDeviceInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    AFPeerInfo * _peerInfo;
    AFAudioSessionCoordinationSystemInfo * _systemInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AFPeerInfo *peerInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) AFAudioSessionCoordinationSystemInfo *systemInfo;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPeerInfo:(id)arg1 systemInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)peerInfo;
- (id)systemInfo;

@end
