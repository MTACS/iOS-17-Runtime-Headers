
@interface AWDScanStatsPerSlice : PBCodable <NSCopying> {
    unsigned int  _avgAgeScan;
    struct { 
        unsigned int numAbort : 1; 
        unsigned int avgAgeScan : 1; 
        unsigned int numScanWifiCritical : 1; 
    }  _has;
    unsigned long long  _numAbort;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numChanScanneds;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numScanBlankeds;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numScanModes;
    unsigned int  _numScanWifiCritical;
    NSMutableArray * _scanObjects;
}

@property (nonatomic) unsigned int avgAgeScan;
@property (nonatomic) bool hasAvgAgeScan;
@property (nonatomic) bool hasNumAbort;
@property (nonatomic) bool hasNumScanWifiCritical;
@property (nonatomic) unsigned long long numAbort;
@property (nonatomic, readonly) unsigned int*numChanScanneds;
@property (nonatomic, readonly) unsigned long long numChanScannedsCount;
@property (nonatomic, readonly) unsigned int*numScanBlankeds;
@property (nonatomic, readonly) unsigned long long numScanBlankedsCount;
@property (nonatomic, readonly) unsigned int*numScanModes;
@property (nonatomic, readonly) unsigned long long numScanModesCount;
@property (nonatomic) unsigned int numScanWifiCritical;
@property (nonatomic, retain) NSMutableArray *scanObjects;

+ (Class)scanObjectType;

- (void)addNumChanScanned:(unsigned int)arg1;
- (void)addNumScanBlanked:(unsigned int)arg1;
- (void)addNumScanMode:(unsigned int)arg1;
- (void)addScanObject:(id)arg1;
- (unsigned int)avgAgeScan;
- (void)clearNumChanScanneds;
- (void)clearNumScanBlankeds;
- (void)clearNumScanModes;
- (void)clearScanObjects;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvgAgeScan;
- (bool)hasNumAbort;
- (bool)hasNumScanWifiCritical;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numAbort;
- (unsigned int)numChanScannedAtIndex:(unsigned long long)arg1;
- (unsigned int*)numChanScanneds;
- (unsigned long long)numChanScannedsCount;
- (unsigned int)numScanBlankedAtIndex:(unsigned long long)arg1;
- (unsigned int*)numScanBlankeds;
- (unsigned long long)numScanBlankedsCount;
- (unsigned int)numScanModeAtIndex:(unsigned long long)arg1;
- (unsigned int*)numScanModes;
- (unsigned long long)numScanModesCount;
- (unsigned int)numScanWifiCritical;
- (bool)readFrom:(id)arg1;
- (id)scanObjectAtIndex:(unsigned long long)arg1;
- (id)scanObjects;
- (unsigned long long)scanObjectsCount;
- (void)setAvgAgeScan:(unsigned int)arg1;
- (void)setHasAvgAgeScan:(bool)arg1;
- (void)setHasNumAbort:(bool)arg1;
- (void)setHasNumScanWifiCritical:(bool)arg1;
- (void)setNumAbort:(unsigned long long)arg1;
- (void)setNumChanScanneds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNumScanBlankeds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNumScanModes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNumScanWifiCritical:(unsigned int)arg1;
- (void)setScanObjects:(id)arg1;
- (void)writeTo:(id)arg1;

@end
