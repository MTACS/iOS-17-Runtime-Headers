
@interface _INPBActivateCarSignalIntent : PBCodable <NSCopying, NSSecureCoding, _INPBActivateCarSignalIntent> {
    _INPBDataString * _carName;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _signals;
}

@property (nonatomic, retain) _INPBDataString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCarName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) int*signals;
@property (nonatomic, readonly) unsigned long long signalsCount;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsSignals:(id)arg1;
- (void)addSignals:(int)arg1;
- (id)carName;
- (void)clearSignals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSignals:(int*)arg1 count:(unsigned long long)arg2;
- (int*)signals;
- (id)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signalsCount;
- (void)writeTo:(id)arg1;

@end
