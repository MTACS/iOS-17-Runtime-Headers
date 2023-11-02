
@interface VCSessionMediaTypeSettings : VCObject <NSSecureCoding> {
    unsigned int  _mediaState;
    unsigned int  _mediaType;
    unsigned int  _remoteMediaState;
    NSMutableSet * _streamGroupIDs;
}

@property (nonatomic) unsigned int mediaState;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic) unsigned int remoteMediaState;
@property (nonatomic, readonly) NSSet *streamGroupIDs;

+ (id)serializationClasses;
+ (id)settingsWithMediaType:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void)addStreamGroupID:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaType:(unsigned int)arg1;
- (unsigned int)mediaState;
- (unsigned int)mediaType;
- (unsigned int)remoteMediaState;
- (void)setMediaState:(unsigned int)arg1;
- (void)setRemoteMediaState:(unsigned int)arg1;
- (id)streamGroupIDs;

@end
