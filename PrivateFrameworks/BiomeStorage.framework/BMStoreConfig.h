
@interface BMStoreConfig : NSObject <NSCopying> {
    unsigned long long  _configDatastoreVersion;
    NSString * _datastorePath;
    unsigned long long  _domain;
    bool  _isManaged;
    unsigned long long  _protectionClass;
    BMPruningPolicy * _pruningPolicy;
    NSString * _remoteStreamName;
    unsigned long long  _segmentSize;
    long long  _storeLocationOption;
    NSString * _streamIdentifierForLogging;
    unsigned long long  _streamType;
    unsigned int  _uid;
}

@property (nonatomic, readonly) unsigned long long configDatastoreVersion;
@property (nonatomic, readonly) NSString *datastorePath;
@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) unsigned long long protectionClass;
@property (nonatomic, retain) BMPruningPolicy *pruningPolicy;
@property (nonatomic, copy) NSString *remoteStreamName;
@property (nonatomic, readonly) unsigned long long segmentSize;
@property (nonatomic) long long storeLocationOption;
@property (nonatomic, readonly) unsigned int uid;

// Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage

+ (int)defaultStoreVersion;
+ (id)new;
+ (id)newLibraryStoreConfigForStreamIdentifier:(id)arg1 domain:(unsigned long long)arg2 segmentSize:(unsigned long long)arg3 protectionClass:(unsigned long long)arg4 pruningPolicy:(id)arg5;
+ (id)newPrivateStreamDefaultConfigurationWithProtectionClass:(unsigned long long)arg1 segmentSize:(unsigned long long)arg2;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg1;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)arg1 protectionClass:(unsigned long long)arg2;
+ (id)newPublicStreamDefaultConfiguration;
+ (id)newPublicStreamDefaultConfigurationWithProtectionClass:(unsigned long long)arg1;
+ (id)newRestrictedStreamDefaultConfiguration;
+ (id)newRestrictedStreamDefaultConfigurationWithProtectionClass:(unsigned long long)arg1;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)arg1;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)arg1 protectionClass:(unsigned long long)arg2;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)arg1 protectionClass:(unsigned long long)arg2 domain:(unsigned long long)arg3;
+ (id)newSharedSyncRestrictedStreamWithCurrentAccountSegmentSize:(unsigned long long)arg1 protectionClass:(unsigned long long)arg2 domain:(unsigned long long)arg3;
+ (id)newSharedSyncRestrictedStreamWithUserIdentifier:(id)arg1 segmentSize:(unsigned long long)arg2 protectionClass:(unsigned long long)arg3 domain:(unsigned long long)arg4;
+ (id)newStreamDefaultConfigurationForPublicStream:(bool)arg1;
+ (id)newStreamDefaultConfigurationForPublicStream:(bool)arg1 protectionClass:(unsigned long long)arg2;
+ (id)newStreamDefaultConfigurationForPublicStream:(bool)arg1 protectionClass:(unsigned long long)arg2 segmentSize:(unsigned long long)arg3;
+ (unsigned long long)streamTypeFromStorePath:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)configDatastoreVersion;
- (id)copyStoreConfigWithOption:(long long)arg1 account:(id)arg2 remoteStreamName:(id)arg3;
- (id)copyStoreConfigWithOption:(long long)arg1 remoteStreamName:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datastorePath;
- (id)description;
- (unsigned long long)domain;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStoreBasePath:(id)arg1 segmentSize:(unsigned long long)arg2;
- (id)initWithStoreBasePath:(id)arg1 segmentSize:(unsigned long long)arg2 protectionClass:(unsigned long long)arg3;
- (id)initWithStoreVersion:(unsigned long long)arg1 storeBasePath:(id)arg2 segmentSize:(unsigned long long)arg3 protectionClass:(unsigned long long)arg4 storeLocationOption:(long long)arg5 remoteStreamName:(id)arg6 pruningPolicy:(id)arg7;
- (id)initWithStoreVersion:(unsigned long long)arg1 storeBasePath:(id)arg2 segmentSize:(unsigned long long)arg3 protectionClass:(unsigned long long)arg4 storeLocationOption:(long long)arg5 remoteStreamName:(id)arg6 pruningPolicy:(id)arg7 streamType:(unsigned long long)arg8 domain:(unsigned long long)arg9 isManaged:(bool)arg10 streamIdentifier:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isManaged;
- (unsigned long long)protectionClass;
- (id)pruningPolicy;
- (id)remoteStreamName;
- (unsigned long long)segmentSize;
- (void)setPruningPolicy:(id)arg1;
- (void)setRemoteStreamName:(id)arg1;
- (void)setStoreLocationOption:(long long)arg1;
- (long long)storeLocationOption;
- (unsigned long long)streamType;
- (unsigned int)uid;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

+ (id)atx_biomeStreamManagerStreamsBasePath;
+ (id)atx_storeConfig;

@end
