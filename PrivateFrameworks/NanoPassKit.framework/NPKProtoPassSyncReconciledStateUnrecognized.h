
@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying> {
    struct { 
        unsigned int unrecognizedReconciledStateVersion : 1; 
    }  _has;
    NPKProtoPassSyncState * _libraryPassSyncState;
    NSData * _unrecognizedReconciledStateHash;
    unsigned int  _unrecognizedReconciledStateVersion;
}

@property (nonatomic, readonly) bool hasLibraryPassSyncState;
@property (nonatomic, readonly) bool hasUnrecognizedReconciledStateHash;
@property (nonatomic) bool hasUnrecognizedReconciledStateVersion;
@property (nonatomic, retain) NPKProtoPassSyncState *libraryPassSyncState;
@property (nonatomic, retain) NSData *unrecognizedReconciledStateHash;
@property (nonatomic) unsigned int unrecognizedReconciledStateVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLibraryPassSyncState;
- (bool)hasUnrecognizedReconciledStateHash;
- (bool)hasUnrecognizedReconciledStateVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryPassSyncState;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasUnrecognizedReconciledStateVersion:(bool)arg1;
- (void)setLibraryPassSyncState:(id)arg1;
- (void)setUnrecognizedReconciledStateHash:(id)arg1;
- (void)setUnrecognizedReconciledStateVersion:(unsigned int)arg1;
- (id)unrecognizedReconciledStateHash;
- (unsigned int)unrecognizedReconciledStateVersion;
- (void)writeTo:(id)arg1;

@end
