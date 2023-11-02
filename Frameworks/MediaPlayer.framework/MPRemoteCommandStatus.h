
@interface MPRemoteCommandStatus : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying> {
    MPRemoteCommandHandlerDialog * _dialog;
    MRSendCommandResultStatus * _mediaRemoteType;
}

@property (nonatomic, readonly, copy) NSData *customData;
@property (nonatomic, readonly, copy) NSString *customDataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPRemoteCommandHandlerDialog *dialog;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) MRSendCommandResultStatus *mediaRemoteType;
@property (nonatomic, readonly) long long statusCode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)statusWithCode:(long long)arg1;
+ (id)statusWithCode:(long long)arg1 customData:(id)arg2 type:(id)arg3;
+ (id)statusWithCode:(long long)arg1 dialog:(id)arg2;
+ (id)statusWithCode:(long long)arg1 error:(id)arg2;
+ (id)successStatus;

- (void).cxx_destruct;
- (id)analyticSignature;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customData;
- (id)customDataType;
- (id)description;
- (id)dialog;
- (id)error;
- (id)initWithMediaRemoteType:(id)arg1;
- (id)mediaRemoteType;
- (long long)statusCode;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
