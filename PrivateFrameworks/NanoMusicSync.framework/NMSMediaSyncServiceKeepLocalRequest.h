
@interface NMSMediaSyncServiceKeepLocalRequest : PBRequest <NSCopying> {
    int  _enableState;
    struct { 
        unsigned int enableState : 1; 
    }  _has;
    NMSMediaSyncServiceModelObject * _modelObject;
    NMSMediaSyncServiceKeepLocalOptions * _options;
}

@property (nonatomic) int enableState;
@property (nonatomic) bool hasEnableState;
@property (nonatomic, readonly) bool hasModelObject;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic, retain) NMSMediaSyncServiceModelObject *modelObject;
@property (nonatomic, retain) NMSMediaSyncServiceKeepLocalOptions *options;

- (void).cxx_destruct;
- (int)StringAsEnableState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)enableState;
- (id)enableStateAsString:(int)arg1;
- (bool)hasEnableState;
- (bool)hasModelObject;
- (bool)hasOptions;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelObject;
- (id)options;
- (bool)readFrom:(id)arg1;
- (void)setEnableState:(int)arg1;
- (void)setHasEnableState:(bool)arg1;
- (void)setModelObject:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
