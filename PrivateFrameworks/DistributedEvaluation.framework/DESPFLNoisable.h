
@interface DESPFLNoisable : PBCodable <NSCopying> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _data32s;
    DESDataTransport * _dataTransport;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _datas;
    struct { 
        unsigned int weight : 1; 
        unsigned int iteration : 1; 
        unsigned int version : 1; 
    }  _has;
    unsigned int  _iteration;
    NSString * _recipeId;
    NSString * _uuid;
    int  _version;
    double  _weight;
}

@property (nonatomic, readonly) float*data32s;
@property (nonatomic, readonly) unsigned long long data32sCount;
@property (nonatomic, retain) DESDataTransport *dataTransport;
@property (nonatomic, readonly) double*datas;
@property (nonatomic, readonly) unsigned long long datasCount;
@property (nonatomic, readonly) bool hasDataTransport;
@property (nonatomic) bool hasIteration;
@property (nonatomic, readonly) bool hasRecipeId;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool hasWeight;
@property (nonatomic) unsigned int iteration;
@property (nonatomic, retain) NSString *recipeId;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) int version;
@property (nonatomic) double weight;

- (void).cxx_destruct;
- (void)addData32:(float)arg1;
- (void)addData:(double)arg1;
- (void)clearData32s;
- (void)clearDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)data32AtIndex:(unsigned long long)arg1;
- (float*)data32s;
- (unsigned long long)data32sCount;
- (double)dataAtIndex:(unsigned long long)arg1;
- (id)dataTransport;
- (double*)datas;
- (unsigned long long)datasCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataTransport;
- (bool)hasIteration;
- (bool)hasRecipeId;
- (bool)hasUuid;
- (bool)hasVersion;
- (bool)hasWeight;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)iteration;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipeId;
- (void)setData32s:(float*)arg1 count:(unsigned long long)arg2;
- (void)setDataTransport:(id)arg1;
- (void)setDatas:(double*)arg1 count:(unsigned long long)arg2;
- (void)setHasIteration:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setHasWeight:(bool)arg1;
- (void)setIteration:(unsigned int)arg1;
- (void)setRecipeId:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersion:(int)arg1;
- (void)setWeight:(double)arg1;
- (id)uuid;
- (int)version;
- (double)weight;
- (void)writeTo:(id)arg1;

@end
