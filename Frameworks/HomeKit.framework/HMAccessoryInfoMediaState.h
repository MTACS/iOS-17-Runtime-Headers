
@interface HMAccessoryInfoMediaState : NSObject {
    NSString * _mediaIdentifier;
    long long  _playbackState;
    long long  _repeatState;
    long long  _shuffleState;
    double  _volume;
}

@property (readonly, copy) NSString *mediaIdentifier;
@property (readonly) long long playbackState;
@property (readonly) long long repeatState;
@property (readonly) long long shuffleState;
@property (readonly) double volume;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMediaIdentifier:(id)arg1 volume:(double)arg2 playbackState:(long long)arg3 shuffleState:(long long)arg4 repeatState:(long long)arg5;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaIdentifier;
- (long long)playbackState;
- (id)protoData;
- (id)protoPayload;
- (long long)repeatState;
- (long long)shuffleState;
- (double)volume;

@end
