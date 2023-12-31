
@interface AWDWiFiNWActivityPeerStats : PBCodable <NSCopying> {
    NSMutableArray * _acCompletions;
    NSMutableArray * _bytes;
    unsigned int  _ccaValue;
    NSMutableArray * _ccas;
    AWDWiFiNWActivityTxCompletions * _completions;
    struct { 
        unsigned int ccaValue : 1; 
        unsigned int ibssCCA : 1; 
        unsigned int interferenceCCA : 1; 
        unsigned int nfValue : 1; 
        unsigned int obssCCA : 1; 
        unsigned int ofdmDesense : 1; 
        unsigned int qbssCCA : 1; 
        unsigned int qbssSTACount : 1; 
        unsigned int role : 1; 
        unsigned int rssiValue : 1; 
        unsigned int snrValue : 1; 
    }  _has;
    NSString * _hashID;
    unsigned int  _ibssCCA;
    unsigned int  _interferenceCCA;
    int  _nfValue;
    unsigned int  _obssCCA;
    unsigned int  _ofdmDesense;
    NSMutableArray * _packets;
    unsigned int  _qbssCCA;
    unsigned int  _qbssSTACount;
    int  _role;
    int  _rssiValue;
    NSMutableArray * _rssis;
    NSMutableArray * _rxLatencyTID0s;
    NSMutableArray * _rxLatencyTID1s;
    NSMutableArray * _rxLatencyTID2s;
    NSMutableArray * _rxLatencyTID3s;
    NSMutableArray * _rxLatencyTID4s;
    NSMutableArray * _rxLatencyTID5s;
    NSMutableArray * _rxLatencyTID6s;
    NSMutableArray * _rxLatencyTID7s;
    int  _snrValue;
    NSMutableArray * _snrs;
    NSMutableArray * _txLatencyBEs;
    NSMutableArray * _txLatencyBKs;
    NSMutableArray * _txLatencyVIs;
    NSMutableArray * _txLatencyVOs;
}

@property (nonatomic, retain) NSMutableArray *acCompletions;
@property (nonatomic, retain) NSMutableArray *bytes;
@property (nonatomic) unsigned int ccaValue;
@property (nonatomic, retain) NSMutableArray *ccas;
@property (nonatomic, retain) AWDWiFiNWActivityTxCompletions *completions;
@property (nonatomic) bool hasCcaValue;
@property (nonatomic, readonly) bool hasCompletions;
@property (nonatomic, readonly) bool hasHashID;
@property (nonatomic) bool hasIbssCCA;
@property (nonatomic) bool hasInterferenceCCA;
@property (nonatomic) bool hasNfValue;
@property (nonatomic) bool hasObssCCA;
@property (nonatomic) bool hasOfdmDesense;
@property (nonatomic) bool hasQbssCCA;
@property (nonatomic) bool hasQbssSTACount;
@property (nonatomic) bool hasRole;
@property (nonatomic) bool hasRssiValue;
@property (nonatomic) bool hasSnrValue;
@property (nonatomic, retain) NSString *hashID;
@property (nonatomic) unsigned int ibssCCA;
@property (nonatomic) unsigned int interferenceCCA;
@property (nonatomic) int nfValue;
@property (nonatomic) unsigned int obssCCA;
@property (nonatomic) unsigned int ofdmDesense;
@property (nonatomic, retain) NSMutableArray *packets;
@property (nonatomic) unsigned int qbssCCA;
@property (nonatomic) unsigned int qbssSTACount;
@property (nonatomic) int role;
@property (nonatomic) int rssiValue;
@property (nonatomic, retain) NSMutableArray *rssis;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID0s;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID1s;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID2s;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID3s;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID4s;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID5s;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID6s;
@property (nonatomic, retain) NSMutableArray *rxLatencyTID7s;
@property (nonatomic) int snrValue;
@property (nonatomic, retain) NSMutableArray *snrs;
@property (nonatomic, retain) NSMutableArray *txLatencyBEs;
@property (nonatomic, retain) NSMutableArray *txLatencyBKs;
@property (nonatomic, retain) NSMutableArray *txLatencyVIs;
@property (nonatomic, retain) NSMutableArray *txLatencyVOs;

+ (Class)acCompletionsType;
+ (Class)bytesType;
+ (Class)ccaType;
+ (Class)packetsType;
+ (Class)rssiType;
+ (Class)rxLatencyTID0Type;
+ (Class)rxLatencyTID1Type;
+ (Class)rxLatencyTID2Type;
+ (Class)rxLatencyTID3Type;
+ (Class)rxLatencyTID4Type;
+ (Class)rxLatencyTID5Type;
+ (Class)rxLatencyTID6Type;
+ (Class)rxLatencyTID7Type;
+ (Class)snrType;
+ (Class)txLatencyBEType;
+ (Class)txLatencyBKType;
+ (Class)txLatencyVIType;
+ (Class)txLatencyVOType;

- (int)StringAsRole:(id)arg1;
- (id)acCompletions;
- (id)acCompletionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)acCompletionsCount;
- (void)addAcCompletions:(id)arg1;
- (void)addBytes:(id)arg1;
- (void)addCca:(id)arg1;
- (void)addPackets:(id)arg1;
- (void)addRssi:(id)arg1;
- (void)addRxLatencyTID0:(id)arg1;
- (void)addRxLatencyTID1:(id)arg1;
- (void)addRxLatencyTID2:(id)arg1;
- (void)addRxLatencyTID3:(id)arg1;
- (void)addRxLatencyTID4:(id)arg1;
- (void)addRxLatencyTID5:(id)arg1;
- (void)addRxLatencyTID6:(id)arg1;
- (void)addRxLatencyTID7:(id)arg1;
- (void)addSnr:(id)arg1;
- (void)addTxLatencyBE:(id)arg1;
- (void)addTxLatencyBK:(id)arg1;
- (void)addTxLatencyVI:(id)arg1;
- (void)addTxLatencyVO:(id)arg1;
- (id)bytes;
- (id)bytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)bytesCount;
- (id)ccaAtIndex:(unsigned long long)arg1;
- (unsigned int)ccaValue;
- (id)ccas;
- (unsigned long long)ccasCount;
- (void)clearAcCompletions;
- (void)clearBytes;
- (void)clearCcas;
- (void)clearPackets;
- (void)clearRssis;
- (void)clearRxLatencyTID0s;
- (void)clearRxLatencyTID1s;
- (void)clearRxLatencyTID2s;
- (void)clearRxLatencyTID3s;
- (void)clearRxLatencyTID4s;
- (void)clearRxLatencyTID5s;
- (void)clearRxLatencyTID6s;
- (void)clearRxLatencyTID7s;
- (void)clearSnrs;
- (void)clearTxLatencyBEs;
- (void)clearTxLatencyBKs;
- (void)clearTxLatencyVIs;
- (void)clearTxLatencyVOs;
- (id)completions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCcaValue;
- (bool)hasCompletions;
- (bool)hasHashID;
- (bool)hasIbssCCA;
- (bool)hasInterferenceCCA;
- (bool)hasNfValue;
- (bool)hasObssCCA;
- (bool)hasOfdmDesense;
- (bool)hasQbssCCA;
- (bool)hasQbssSTACount;
- (bool)hasRole;
- (bool)hasRssiValue;
- (bool)hasSnrValue;
- (unsigned long long)hash;
- (id)hashID;
- (unsigned int)ibssCCA;
- (unsigned int)interferenceCCA;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nfValue;
- (unsigned int)obssCCA;
- (unsigned int)ofdmDesense;
- (id)packets;
- (id)packetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packetsCount;
- (unsigned int)qbssCCA;
- (unsigned int)qbssSTACount;
- (bool)readFrom:(id)arg1;
- (int)role;
- (id)roleAsString:(int)arg1;
- (id)rssiAtIndex:(unsigned long long)arg1;
- (int)rssiValue;
- (id)rssis;
- (unsigned long long)rssisCount;
- (id)rxLatencyTID0AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID0s;
- (unsigned long long)rxLatencyTID0sCount;
- (id)rxLatencyTID1AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID1s;
- (unsigned long long)rxLatencyTID1sCount;
- (id)rxLatencyTID2AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID2s;
- (unsigned long long)rxLatencyTID2sCount;
- (id)rxLatencyTID3AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID3s;
- (unsigned long long)rxLatencyTID3sCount;
- (id)rxLatencyTID4AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID4s;
- (unsigned long long)rxLatencyTID4sCount;
- (id)rxLatencyTID5AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID5s;
- (unsigned long long)rxLatencyTID5sCount;
- (id)rxLatencyTID6AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID6s;
- (unsigned long long)rxLatencyTID6sCount;
- (id)rxLatencyTID7AtIndex:(unsigned long long)arg1;
- (id)rxLatencyTID7s;
- (unsigned long long)rxLatencyTID7sCount;
- (void)setAcCompletions:(id)arg1;
- (void)setBytes:(id)arg1;
- (void)setCcaValue:(unsigned int)arg1;
- (void)setCcas:(id)arg1;
- (void)setCompletions:(id)arg1;
- (void)setHasCcaValue:(bool)arg1;
- (void)setHasIbssCCA:(bool)arg1;
- (void)setHasInterferenceCCA:(bool)arg1;
- (void)setHasNfValue:(bool)arg1;
- (void)setHasObssCCA:(bool)arg1;
- (void)setHasOfdmDesense:(bool)arg1;
- (void)setHasQbssCCA:(bool)arg1;
- (void)setHasQbssSTACount:(bool)arg1;
- (void)setHasRole:(bool)arg1;
- (void)setHasRssiValue:(bool)arg1;
- (void)setHasSnrValue:(bool)arg1;
- (void)setHashID:(id)arg1;
- (void)setIbssCCA:(unsigned int)arg1;
- (void)setInterferenceCCA:(unsigned int)arg1;
- (void)setNfValue:(int)arg1;
- (void)setObssCCA:(unsigned int)arg1;
- (void)setOfdmDesense:(unsigned int)arg1;
- (void)setPackets:(id)arg1;
- (void)setQbssCCA:(unsigned int)arg1;
- (void)setQbssSTACount:(unsigned int)arg1;
- (void)setRole:(int)arg1;
- (void)setRssiValue:(int)arg1;
- (void)setRssis:(id)arg1;
- (void)setRxLatencyTID0s:(id)arg1;
- (void)setRxLatencyTID1s:(id)arg1;
- (void)setRxLatencyTID2s:(id)arg1;
- (void)setRxLatencyTID3s:(id)arg1;
- (void)setRxLatencyTID4s:(id)arg1;
- (void)setRxLatencyTID5s:(id)arg1;
- (void)setRxLatencyTID6s:(id)arg1;
- (void)setRxLatencyTID7s:(id)arg1;
- (void)setSnrValue:(int)arg1;
- (void)setSnrs:(id)arg1;
- (void)setTxLatencyBEs:(id)arg1;
- (void)setTxLatencyBKs:(id)arg1;
- (void)setTxLatencyVIs:(id)arg1;
- (void)setTxLatencyVOs:(id)arg1;
- (id)snrAtIndex:(unsigned long long)arg1;
- (int)snrValue;
- (id)snrs;
- (unsigned long long)snrsCount;
- (id)txLatencyBEAtIndex:(unsigned long long)arg1;
- (id)txLatencyBEs;
- (unsigned long long)txLatencyBEsCount;
- (id)txLatencyBKAtIndex:(unsigned long long)arg1;
- (id)txLatencyBKs;
- (unsigned long long)txLatencyBKsCount;
- (id)txLatencyVIAtIndex:(unsigned long long)arg1;
- (id)txLatencyVIs;
- (unsigned long long)txLatencyVIsCount;
- (id)txLatencyVOAtIndex:(unsigned long long)arg1;
- (id)txLatencyVOs;
- (unsigned long long)txLatencyVOsCount;
- (void)writeTo:(id)arg1;

@end
