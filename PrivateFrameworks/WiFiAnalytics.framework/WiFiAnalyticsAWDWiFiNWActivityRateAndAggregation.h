
@interface WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _ampduAGGs;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rxHESuccess;
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
    }  _rxampduMUMIMOs;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rxampduOFDMAs;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rxampduSUs;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txHESuccess;
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
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txampduMUMIMOs;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txampduOFDMAs;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txampduSUs;
}

@property (nonatomic, readonly) unsigned long long*ampduAGGs;
@property (nonatomic, readonly) unsigned long long ampduAGGsCount;
@property (nonatomic, readonly) unsigned long long*rxHESuccess;
@property (nonatomic, readonly) unsigned long long rxHESuccessCount;
@property (nonatomic, readonly) unsigned long long*rxMCSSuccess;
@property (nonatomic, readonly) unsigned long long rxMCSSuccessCount;
@property (nonatomic, readonly) unsigned long long*rxVHTSuccess;
@property (nonatomic, readonly) unsigned long long rxVHTSuccessCount;
@property (nonatomic, readonly) unsigned long long*rxampduMUMIMOs;
@property (nonatomic, readonly) unsigned long long rxampduMUMIMOsCount;
@property (nonatomic, readonly) unsigned long long*rxampduOFDMAs;
@property (nonatomic, readonly) unsigned long long rxampduOFDMAsCount;
@property (nonatomic, readonly) unsigned long long*rxampduSUs;
@property (nonatomic, readonly) unsigned long long rxampduSUsCount;
@property (nonatomic, readonly) unsigned long long*txHESuccess;
@property (nonatomic, readonly) unsigned long long txHESuccessCount;
@property (nonatomic, readonly) unsigned long long*txMCSSuccess;
@property (nonatomic, readonly) unsigned long long txMCSSuccessCount;
@property (nonatomic, readonly) unsigned long long*txVHTSuccess;
@property (nonatomic, readonly) unsigned long long txVHTSuccessCount;
@property (nonatomic, readonly) unsigned long long*txampduMUMIMOs;
@property (nonatomic, readonly) unsigned long long txampduMUMIMOsCount;
@property (nonatomic, readonly) unsigned long long*txampduOFDMAs;
@property (nonatomic, readonly) unsigned long long txampduOFDMAsCount;
@property (nonatomic, readonly) unsigned long long*txampduSUs;
@property (nonatomic, readonly) unsigned long long txampduSUsCount;

- (void)addAmpduAGG:(unsigned long long)arg1;
- (void)addRxHESuccess:(unsigned long long)arg1;
- (void)addRxMCSSuccess:(unsigned long long)arg1;
- (void)addRxVHTSuccess:(unsigned long long)arg1;
- (void)addRxampduMUMIMO:(unsigned long long)arg1;
- (void)addRxampduOFDMA:(unsigned long long)arg1;
- (void)addRxampduSU:(unsigned long long)arg1;
- (void)addTxHESuccess:(unsigned long long)arg1;
- (void)addTxMCSSuccess:(unsigned long long)arg1;
- (void)addTxVHTSuccess:(unsigned long long)arg1;
- (void)addTxampduMUMIMO:(unsigned long long)arg1;
- (void)addTxampduOFDMA:(unsigned long long)arg1;
- (void)addTxampduSU:(unsigned long long)arg1;
- (unsigned long long)ampduAGGAtIndex:(unsigned long long)arg1;
- (unsigned long long*)ampduAGGs;
- (unsigned long long)ampduAGGsCount;
- (void)clearAmpduAGGs;
- (void)clearRxHESuccess;
- (void)clearRxMCSSuccess;
- (void)clearRxVHTSuccess;
- (void)clearRxampduMUMIMOs;
- (void)clearRxampduOFDMAs;
- (void)clearRxampduSUs;
- (void)clearTxHESuccess;
- (void)clearTxMCSSuccess;
- (void)clearTxVHTSuccess;
- (void)clearTxampduMUMIMOs;
- (void)clearTxampduOFDMAs;
- (void)clearTxampduSUs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long*)rxHESuccess;
- (unsigned long long)rxHESuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)rxHESuccessCount;
- (unsigned long long*)rxMCSSuccess;
- (unsigned long long)rxMCSSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)rxMCSSuccessCount;
- (unsigned long long*)rxVHTSuccess;
- (unsigned long long)rxVHTSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)rxVHTSuccessCount;
- (unsigned long long)rxampduMUMIMOAtIndex:(unsigned long long)arg1;
- (unsigned long long*)rxampduMUMIMOs;
- (unsigned long long)rxampduMUMIMOsCount;
- (unsigned long long)rxampduOFDMAAtIndex:(unsigned long long)arg1;
- (unsigned long long*)rxampduOFDMAs;
- (unsigned long long)rxampduOFDMAsCount;
- (unsigned long long)rxampduSUAtIndex:(unsigned long long)arg1;
- (unsigned long long*)rxampduSUs;
- (unsigned long long)rxampduSUsCount;
- (void)setAmpduAGGs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxHESuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxampduMUMIMOs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxampduOFDMAs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRxampduSUs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxHESuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxMCSSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxVHTSuccess:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxampduMUMIMOs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxampduOFDMAs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setTxampduSUs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long*)txHESuccess;
- (unsigned long long)txHESuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)txHESuccessCount;
- (unsigned long long*)txMCSSuccess;
- (unsigned long long)txMCSSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)txMCSSuccessCount;
- (unsigned long long*)txVHTSuccess;
- (unsigned long long)txVHTSuccessAtIndex:(unsigned long long)arg1;
- (unsigned long long)txVHTSuccessCount;
- (unsigned long long)txampduMUMIMOAtIndex:(unsigned long long)arg1;
- (unsigned long long*)txampduMUMIMOs;
- (unsigned long long)txampduMUMIMOsCount;
- (unsigned long long)txampduOFDMAAtIndex:(unsigned long long)arg1;
- (unsigned long long*)txampduOFDMAs;
- (unsigned long long)txampduOFDMAsCount;
- (unsigned long long)txampduSUAtIndex:(unsigned long long)arg1;
- (unsigned long long*)txampduSUs;
- (unsigned long long)txampduSUsCount;
- (void)writeTo:(id)arg1;

@end
