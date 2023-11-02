
@interface MPRemoteCommandHandlerDialogAction : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying> {
    MRSendCommandHandlerDialogAction * _mediaRemoteType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPRemoteCommandEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) MRSendCommandHandlerDialogAction *mediaRemoteType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 commandEvent:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)event;
- (id)initWithMediaRemoteType:(id)arg1;
- (id)mediaRemoteType;
- (id)title;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
