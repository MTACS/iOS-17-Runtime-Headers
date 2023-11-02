
@interface ADFeature : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _doubleValues;
    NSString * _name;
    NSMutableArray * _stringValues;
    NSString * _version;
}

@property (nonatomic, readonly) double*doubleValues;
@property (nonatomic, readonly) unsigned long long doubleValuesCount;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *stringValues;
@property (nonatomic, retain) NSString *version;

+ (Class)stringValueType;

- (void).cxx_destruct;
- (void)addDoubleValue:(double)arg1;
- (void)addStringValue:(id)arg1;
- (void)clearDoubleValues;
- (void)clearStringValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValueAtIndex:(unsigned long long)arg1;
- (double*)doubleValues;
- (unsigned long long)doubleValuesCount;
- (bool)hasName;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDoubleValues:(double*)arg1 count:(unsigned long long)arg2;
- (void)setName:(id)arg1;
- (void)setStringValues:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)stringValueAtIndex:(unsigned long long)arg1;
- (id)stringValues;
- (unsigned long long)stringValuesCount;
- (id)version;
- (void)writeTo:(id)arg1;

@end
