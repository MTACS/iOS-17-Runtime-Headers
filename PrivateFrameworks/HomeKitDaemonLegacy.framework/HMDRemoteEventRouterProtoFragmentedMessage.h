
@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying> {
    NSData * _fragmentData;
    unsigned int  _fragmentNumber;
    struct { 
        unsigned int totalFragments : 1; 
        unsigned int totalSize : 1; 
        unsigned int fragmentNumber : 1; 
        unsigned int routerVersion : 1; 
    }  _has;
    unsigned int  _routerVersion;
    unsigned long long  _totalFragments;
    unsigned long long  _totalSize;
}

@property (nonatomic, retain) NSData *fragmentData;
@property (nonatomic) unsigned int fragmentNumber;
@property (nonatomic, readonly) bool hasFragmentData;
@property (nonatomic) bool hasFragmentNumber;
@property (nonatomic) bool hasRouterVersion;
@property (nonatomic) bool hasTotalFragments;
@property (nonatomic) bool hasTotalSize;
@property (nonatomic) unsigned int routerVersion;
@property (nonatomic) unsigned long long totalFragments;
@property (nonatomic) unsigned long long totalSize;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fragmentData;
- (unsigned int)fragmentNumber;
- (bool)hasFragmentData;
- (bool)hasFragmentNumber;
- (bool)hasRouterVersion;
- (bool)hasTotalFragments;
- (bool)hasTotalSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)routerVersion;
- (void)setFragmentData:(id)arg1;
- (void)setFragmentNumber:(unsigned int)arg1;
- (void)setHasFragmentNumber:(bool)arg1;
- (void)setHasRouterVersion:(bool)arg1;
- (void)setHasTotalFragments:(bool)arg1;
- (void)setHasTotalSize:(bool)arg1;
- (void)setRouterVersion:(unsigned int)arg1;
- (void)setTotalFragments:(unsigned long long)arg1;
- (void)setTotalSize:(unsigned long long)arg1;
- (unsigned long long)totalFragments;
- (unsigned long long)totalSize;
- (void)writeTo:(id)arg1;

@end
