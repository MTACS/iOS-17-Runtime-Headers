
@interface MPRemoteCommandHandlerDialog : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying> {
    MRSendCommandHandlerDialog * _mediaRemoteType;
}

@property (nonatomic, readonly) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedMessage;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) MRSendCommandHandlerDialog *mediaRemoteType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;

- (void).cxx_destruct;
- (id)actions;
- (void)addAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithMediaRemoteType:(id)arg1;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)mediaRemoteType;
- (void)setLocalizedMessage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
