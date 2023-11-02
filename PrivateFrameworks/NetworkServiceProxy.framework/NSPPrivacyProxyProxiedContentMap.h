
@interface NSPPrivacyProxyProxiedContentMap : PBCodable <NSCopying> {
    bool  _enabled;
    struct { 
        unsigned int percentEnabled : 1; 
        unsigned int resolver : 1; 
        unsigned int supportsReverseProxying : 1; 
        unsigned int systemProcessOnly : 1; 
    }  _has;
    NSMutableArray * _hostnames;
    NSString * _identifier;
    unsigned int  _percentEnabled;
    NSMutableArray * _processes;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _proxies;
    unsigned int  _resolver;
    bool  _supportsReverseProxying;
    bool  _systemProcessOnly;
    NSMutableArray * _urls;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool hasPercentEnabled;
@property (nonatomic) bool hasResolver;
@property (nonatomic) bool hasSupportsReverseProxying;
@property (nonatomic) bool hasSystemProcessOnly;
@property (nonatomic, retain) NSMutableArray *hostnames;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned int percentEnabled;
@property (nonatomic, retain) NSMutableArray *processes;
@property (nonatomic, readonly) unsigned int*proxies;
@property (nonatomic, readonly) unsigned long long proxiesCount;
@property (nonatomic) unsigned int resolver;
@property (nonatomic) bool supportsReverseProxying;
@property (nonatomic) bool systemProcessOnly;
@property (nonatomic, retain) NSMutableArray *urls;

+ (Class)hostnamesType;
+ (Class)processesType;
+ (Class)urlsType;

- (void).cxx_destruct;
- (void)addHostnames:(id)arg1;
- (void)addProcesses:(id)arg1;
- (void)addProxies:(unsigned int)arg1;
- (void)addUrls:(id)arg1;
- (void)clearHostnames;
- (void)clearProcesses;
- (void)clearProxies;
- (void)clearUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasPercentEnabled;
- (bool)hasResolver;
- (bool)hasSupportsReverseProxying;
- (bool)hasSystemProcessOnly;
- (unsigned long long)hash;
- (id)hostnames;
- (id)hostnamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hostnamesCount;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)percentEnabled;
- (id)processes;
- (id)processesAtIndex:(unsigned long long)arg1;
- (unsigned long long)processesCount;
- (unsigned int*)proxies;
- (unsigned int)proxiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)proxiesCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)resolver;
- (void)setEnabled:(bool)arg1;
- (void)setHasPercentEnabled:(bool)arg1;
- (void)setHasResolver:(bool)arg1;
- (void)setHasSupportsReverseProxying:(bool)arg1;
- (void)setHasSystemProcessOnly:(bool)arg1;
- (void)setHostnames:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPercentEnabled:(unsigned int)arg1;
- (void)setProcesses:(id)arg1;
- (void)setProxies:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setResolver:(unsigned int)arg1;
- (void)setSupportsReverseProxying:(bool)arg1;
- (void)setSystemProcessOnly:(bool)arg1;
- (void)setUrls:(id)arg1;
- (bool)supportsReverseProxying;
- (bool)systemProcessOnly;
- (id)urls;
- (id)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)writeTo:(id)arg1;

@end
