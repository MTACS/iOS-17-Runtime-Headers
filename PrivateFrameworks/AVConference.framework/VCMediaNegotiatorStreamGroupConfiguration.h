
@interface VCMediaNegotiatorStreamGroupConfiguration : NSObject <NSCopying> {
    unsigned int  _cipherSuite;
    NSMutableOrderedSet * _codecConfigs;
    unsigned int  _groupID;
    unsigned int  _mediaSubtype;
    unsigned int  _mediaType;
    NSMutableOrderedSet * _streamConfigs;
    unsigned int  _syncGroupID;
    VCMediaNegotiatorStreamGroupU1Configuration * _u1Config;
}

@property (nonatomic, readonly) NSOrderedSet *codecConfigs;
@property (nonatomic) unsigned int groupID;
@property (nonatomic) unsigned int mediaSubtype;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic, readonly) NSOrderedSet *streamConfigs;
@property (nonatomic) unsigned int syncGroupID;
@property (nonatomic, retain) VCMediaNegotiatorStreamGroupU1Configuration *u1Config;

+ (id)streamGroupConfigWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4 cipherSuite:(unsigned int)arg5;

- (void)addCodecConfig:(id)arg1;
- (void)addStreamConfig:(id)arg1;
- (id)codecConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)groupID;
- (unsigned long long)indexOfCodecConfig:(id)arg1;
- (id)init;
- (id)initWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4;
- (id)initWithGroupID:(unsigned int)arg1 mediaType:(unsigned int)arg2 subtype:(unsigned int)arg3 syncGroupID:(unsigned int)arg4 cipherSuite:(unsigned int)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaSubtype;
- (unsigned int)mediaType;
- (void)removeStreamConfigs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setGroupID:(unsigned int)arg1;
- (void)setMediaSubtype:(unsigned int)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setSyncGroupID:(unsigned int)arg1;
- (void)setU1Config:(id)arg1;
- (id)streamConfigs;
- (unsigned int)syncGroupID;
- (id)u1Config;

@end
