
@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {
    unsigned int  _audioSessionID;
    int  _audioSessionType;
    NSString * _displayName;
    struct { 
        unsigned int audioSessionID : 1; 
        unsigned int audioSessionType : 1; 
    }  _has;
    NSString * _iconURL;
    NSString * _identifier;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mxSessionIDs;
}

@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) int audioSessionType;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool hasAudioSessionID;
@property (nonatomic) bool hasAudioSessionType;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasIconURL;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *iconURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) long long*mxSessionIDs;
@property (nonatomic, readonly) unsigned long long mxSessionIDsCount;

- (void).cxx_destruct;
- (int)StringAsAudioSessionType:(id)arg1;
- (void)addMxSessionID:(long long)arg1;
- (unsigned int)audioSessionID;
- (int)audioSessionType;
- (id)audioSessionTypeAsString:(int)arg1;
- (void)clearMxSessionIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasAudioSessionID;
- (bool)hasAudioSessionType;
- (bool)hasDisplayName;
- (bool)hasIconURL;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)iconURL;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)mxSessionIDAtIndex:(unsigned long long)arg1;
- (long long*)mxSessionIDs;
- (unsigned long long)mxSessionIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionType:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasAudioSessionID:(bool)arg1;
- (void)setHasAudioSessionType:(bool)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMxSessionIDs:(long long*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
