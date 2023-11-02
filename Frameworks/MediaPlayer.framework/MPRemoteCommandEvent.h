
@interface MPRemoteCommandEvent : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible> {
    MPRemoteCommand * _command;
    NSString * _commandID;
    MPRemoteCommandUserIdentity * _commandUserIdentity;
    NSString * _contextID;
    NSDictionary * _mediaRemoteOptions;
    double  _timeout;
    double  _timestamp;
}

@property (nonatomic, readonly) MPRemoteCommand *command;
@property (nonatomic, readonly) NSString *commandID;
@property (nonatomic, readonly) MPRemoteCommandUserIdentity *commandUserIdentity;
@property (nonatomic, readonly) NSString *contentItemID;
@property (nonatomic, readonly) NSString *contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *interfaceID;
@property (nonatomic, readonly) unsigned int mediaRemoteCommandType;
@property (nonatomic, readonly) NSDictionary *mediaRemoteOptions;
@property (nonatomic, readonly) long long playbackQueueOffset;
@property (nonatomic, readonly) NSString *sourceID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)command;
- (id)commandID;
- (id)commandUserIdentity;
- (id)contentItemID;
- (id)contextID;
- (id)description;
- (id)init;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)interfaceID;
- (unsigned int)mediaRemoteCommandType;
- (id)mediaRemoteOptions;
- (long long)playbackQueueOffset;
- (id)sourceID;
- (double)timeout;
- (double)timestamp;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;
- (id)serverCopy;
- (id)userIdentity;

@end
