
@interface PKPublicChannel : NSObject {
    NSString * _channelID;
    NSString * _channelTopic;
    unsigned long long  _checkpoint;
    NSString * _environment;
    NSString * _tokenName;
}

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic, retain) NSString *channelTopic;
@property (nonatomic) unsigned long long checkpoint;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSString *environment;
@property (nonatomic, retain) NSString *tokenName;

- (void).cxx_destruct;
- (id)channelID;
- (id)channelTopic;
- (unsigned long long)checkpoint;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environment;
- (unsigned long long)hash;
- (id)initWithChannelID:(id)arg1;
- (id)initWithChannelID:(id)arg1 channelTopic:(id)arg2 environment:(id)arg3 checkpoint:(unsigned long long)arg4;
- (id)initWithChannelID:(id)arg1 channelTopic:(id)arg2 environment:(id)arg3 tokenName:(id)arg4 checkpoint:(unsigned long long)arg5;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)resetCheckpoint;
- (void)setChannelID:(id)arg1;
- (void)setChannelTopic:(id)arg1;
- (void)setCheckpoint:(unsigned long long)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setTokenName:(id)arg1;
- (id)tokenName;

@end
