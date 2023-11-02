
@interface NRCompanionLinkPreferences : NRLinkPreferences {
    bool  _highThroughput;
    unsigned long long  _identifier;
    bool  _includeP2P;
    unsigned char  _serviceClass;
}

@property (nonatomic, readonly) bool highThroughput;
@property (nonatomic, readonly) bool includeP2P;
@property (nonatomic, readonly) unsigned char serviceClass;

- (id)copyLongDescription;
- (id)copyShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)highThroughput;
- (bool)includeP2P;
- (id)initForHighThroughputWithServiceClass:(unsigned char)arg1 includeP2P:(bool)arg2;
- (id)initInternalWithServiceClass:(unsigned char)arg1 highThroughout:(bool)arg2 includeP2P:(bool)arg3;
- (id)initWithServiceClass:(unsigned char)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)serviceClass;

@end
