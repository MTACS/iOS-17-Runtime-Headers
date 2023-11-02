
@interface HDCodableStateOfMind : PBCodable <HDDecoding, NSCopying> {
    NSString * _context;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _domains;
    struct { 
        unsigned int reflectiveInterval : 1; 
        unsigned int valence : 1; 
    }  _has;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _labels;
    long long  _reflectiveInterval;
    HDCodableSample * _sample;
    double  _valence;
}

@property (nonatomic, retain) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long*domains;
@property (nonatomic, readonly) unsigned long long domainsCount;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasReflectiveInterval;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasValence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long*labels;
@property (nonatomic, readonly) unsigned long long labelsCount;
@property (nonatomic) long long reflectiveInterval;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) double valence;

- (void).cxx_destruct;
- (void)addDomains:(long long)arg1;
- (void)addLabels:(long long)arg1;
- (bool)applyToObject:(id)arg1;
- (void)clearDomains;
- (void)clearLabels;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long*)domains;
- (long long)domainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)domainsCount;
- (bool)hasContext;
- (bool)hasReflectiveInterval;
- (bool)hasSample;
- (bool)hasValence;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long*)labels;
- (long long)labelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)reflectiveInterval;
- (id)sample;
- (void)setContext:(id)arg1;
- (void)setDomains:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasReflectiveInterval:(bool)arg1;
- (void)setHasValence:(bool)arg1;
- (void)setLabels:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setReflectiveInterval:(long long)arg1;
- (void)setSample:(id)arg1;
- (void)setValence:(double)arg1;
- (double)valence;
- (void)writeTo:(id)arg1;

@end
