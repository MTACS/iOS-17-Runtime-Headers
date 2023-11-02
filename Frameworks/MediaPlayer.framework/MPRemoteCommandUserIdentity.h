
@interface MPRemoteCommandUserIdentity : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding> {
    MRUserIdentity * _mediaRemoteUserIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUserIdentity *mediaRemoteUserIdentity;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemoteUserIdentity:(id)arg1;
- (id)mediaRemoteUserIdentity;
- (id)redactedDescription;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
