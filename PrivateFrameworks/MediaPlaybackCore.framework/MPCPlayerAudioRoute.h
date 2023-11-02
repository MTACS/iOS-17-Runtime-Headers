
@interface MPCPlayerAudioRoute : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying> {
    bool  _canRenderSpatial;
    bool  _canStreamSpatial;
    bool  _isSpatializationEnabled;
    long long  _multiChannelSupport;
    NSString * _name;
    MPNowPlayingInfoAudioFormat * _nowPlayingAudioFormat;
    bool  _supportsSpatialization;
    long long  _type;
}

@property (nonatomic, readonly) bool canRenderSpatial;
@property (nonatomic, readonly) bool canStreamSpatial;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *humanDescription;
@property (nonatomic, readonly) bool isSpatializationEnabled;
@property (nonatomic, readonly) long long multiChannelSupport;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (nonatomic, readonly) MPNowPlayingInfoAudioRoute *nowPlayingAudioRoute;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsSpatialization;
@property (nonatomic, readonly) long long type;

+ (id)payloadValueFromJSONValue:(id)arg1;

- (void).cxx_destruct;
- (bool)canRenderSpatial;
- (bool)canStreamSpatial;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)humanDescription;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithNowPlayingInfoAudioRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 spatialIsAlwaysOn:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSpatializationEnabled;
- (id)mpc_jsonValue;
- (long long)multiChannelSupport;
- (id)name;
- (id)nowPlayingAudioFormat;
- (id)nowPlayingAudioRoute;
- (bool)supportsSpatialization;
- (long long)type;

@end
