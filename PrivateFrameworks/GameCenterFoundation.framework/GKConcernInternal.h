
@interface GKConcernInternal : GKInternalRepresentation {
    unsigned int  _concernID;
    NSString * _message;
    GKPlayerInternal * _player;
}

@property (nonatomic) unsigned int concernID;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) GKPlayerInternal *player;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)concernID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)player;
- (void)setConcernID:(unsigned int)arg1;
- (void)setMessage:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
