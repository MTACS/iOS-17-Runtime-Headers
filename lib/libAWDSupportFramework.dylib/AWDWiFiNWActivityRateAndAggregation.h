
@interface AWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _ampduAGGs;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rxMCSSuccess;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rxVHTSuccess;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txMCSSuccess;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txVHTSuccess;
}

@property (nonatomic, readonly) unsigned long long*ampduAGGs;
@property (nonatomic, readonly) unsigned long long ampduAGGsCount;
@property (nonatomic, readonly) unsigned long long*rxMCSSuccess;
@property (nonatomic, readonly) unsigned long long rxMCSSuccessCount;
@property (nonatomic, readonly) unsigned long long*rxVHTSuccess;
@property (nonatomic, readonly) unsigned long long rxVHTSuccessCount;
@property (nonatomic, readonly) unsigned long long*txMCSSuccess;
@property (nonatomic, readonly) unsigned long long txMCSSuccessCount;
@property (nonatomic, readonly) unsigned long long*txVHTSuccess;
@property (nonatomic, readonly) unsigned long long txVHTSuccessCount;

- (void)addAmpduAGG:(unsigned long long)arg1;
- (void)addRxMCSSuccess:(unsigned long long)arg1;
- (void)addRxVHTSuccess:(unsigned long long)arg1;
- (void)addTxMCSSuccess:(unsigned long long)arg1;
- (void)addTxVHTSuccess:(unsigned long long)arg1;
- (unsigned long long)ampduAGGAtIndex:(unsigned long long)arg1;
- (unsigned long long*)ampduAGGs;
- (unsigned long long)ampduAGGsCount;
- (void)clearAmpduAGGs;
- (void)clearRxMCSSuccess;
- (void)clearRxVHTSuccess;
- (void)clearTxMCSSuccess;
- (void)clearTxVHTSuccess;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long*)rxMCSSuccess;
- (unsigned long long)rxMCSSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)rxMCSSuccessCount;
- (unsigned long long*)rxVHTSuccess;
- (unsigned long long)rxVHTSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)rxVHTSuccessCount;
- (void)setAmpduAGGs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long*)txMCSSuccess;
- (unsigned long long)txMCSSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)txMCSSuccessCount;
- (unsigned long long*)txVHTSuccess;
- (unsigned long long)txVHTSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)txVHTSuccessCount;
- (void)writeTo:(id)arg1;

@end
