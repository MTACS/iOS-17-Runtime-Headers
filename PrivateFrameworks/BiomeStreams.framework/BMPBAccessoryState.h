
@interface BMPBAccessoryState : PBCodable <NSCopying> {
    NSData * _dataValue;
    struct { 
        unsigned int numValue : 1; 
        unsigned int valueType : 1; 
    }  _has;
    NSString * _mediaPropertyType;
    double  _numValue;
    NSString * _stringValue;
    int  _valueType;
}

@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasMediaPropertyType;
@property (nonatomic) bool hasNumValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasValueType;
@property (nonatomic, retain) NSString *mediaPropertyType;
@property (nonatomic) double numValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int valueType;

- (void).cxx_destruct;
- (int)StringAsValueType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasMediaPropertyType;
- (bool)hasNumValue;
- (bool)hasStringValue;
- (bool)hasValueType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mediaPropertyType;
- (void)mergeFrom:(id)arg1;
- (double)numValue;
- (bool)readFrom:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setHasNumValue:(bool)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setMediaPropertyType:(id)arg1;
- (void)setNumValue:(double)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (int)valueType;
- (id)valueTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
