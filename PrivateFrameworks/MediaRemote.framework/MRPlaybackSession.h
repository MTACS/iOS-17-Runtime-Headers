
@interface MRPlaybackSession : NSObject {
    NSString * _identifier;
    NSData * _metadata;
    NSData * _playbackSessionData;
    NSString * _revision;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSData *metadata;
@property (nonatomic, copy) NSData *playbackSessionData;
@property (nonatomic, readonly) _MRPlaybackSessionProtobuf *protobuf;
@property (nonatomic, readonly, copy) NSString *revision;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 playbackSessionData:(id)arg3 revision:(id)arg4 metadata:(id)arg5;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)playbackSessionData;
- (id)protobuf;
- (id)revision;
- (void)setIdentifier:(id)arg1;
- (void)setPlaybackSessionData:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
