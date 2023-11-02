
@interface HKCodableSummaryStateOfMindValue : PBCodable <NSCopying> {
    double  _dateData;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _domains;
    struct APPLE_HKCodableSummaryStateOfMindValue_1 { 
        unsigned int dateData : 1; 
        unsigned int reflectiveInterval : 1; 
        unsigned int valence : 1; 
    }  _has;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _labels;
    long long  _reflectiveInterval;
    double  _valence;
}

@property (nonatomic) double dateData;
@property (nonatomic, readonly) long long*domains;
@property (nonatomic, readonly) unsigned long long domainsCount;
@property (nonatomic) bool hasDateData;
@property (nonatomic) bool hasReflectiveInterval;
@property (nonatomic) bool hasValence;
@property (nonatomic, readonly) long long*labels;
@property (nonatomic, readonly) unsigned long long labelsCount;
@property (nonatomic) long long reflectiveInterval;
@property (nonatomic) double valence;

- (void)addDomains:(long long)arg1;
- (void)addLabels:(long long)arg1;
- (void)clearDomains;
- (void)clearLabels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long*)domains;
- (long long)domainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)domainsCount;
- (bool)hasDateData;
- (bool)hasReflectiveInterval;
- (bool)hasValence;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long*)labels;
- (long long)labelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)reflectiveInterval;
- (void)setDateData:(double)arg1;
- (void)setDomains:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasDateData:(bool)arg1;
- (void)setHasReflectiveInterval:(bool)arg1;
- (void)setHasValence:(bool)arg1;
- (void)setLabels:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setReflectiveInterval:(long long)arg1;
- (void)setValence:(double)arg1;
- (double)valence;
- (void)writeTo:(id)arg1;

@end
