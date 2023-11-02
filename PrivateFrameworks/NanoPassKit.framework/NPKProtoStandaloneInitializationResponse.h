
@interface NPKProtoStandaloneInitializationResponse : PBCodable <NSCopying> {
    NSString * _clientInfoHTTPHeader;
    NPKProtoStandaloneError * _error;
    NPKProtoStandaloneResponseHeader * _responseHeader;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedServerVersions;
}

@property (nonatomic, retain) NSString *clientInfoHTTPHeader;
@property (nonatomic, retain) NPKProtoStandaloneError *error;
@property (nonatomic, readonly) bool hasClientInfoHTTPHeader;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic, retain) NPKProtoStandaloneResponseHeader *responseHeader;
@property (nonatomic, readonly) int*supportedServerVersions;
@property (nonatomic, readonly) unsigned long long supportedServerVersionsCount;

- (void).cxx_destruct;
- (int)StringAsSupportedServerVersions:(id)arg1;
- (void)addSupportedServerVersions:(int)arg1;
- (void)clearSupportedServerVersions;
- (id)clientInfoHTTPHeader;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasClientInfoHTTPHeader;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseHeader;
- (void)setClientInfoHTTPHeader:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResponseHeader:(id)arg1;
- (void)setSupportedServerVersions:(int*)arg1 count:(unsigned long long)arg2;
- (int*)supportedServerVersions;
- (id)supportedServerVersionsAsString:(int)arg1;
- (int)supportedServerVersionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedServerVersionsCount;
- (void)writeTo:(id)arg1;

@end
