
@interface _INPBReportIncidentIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBReportIncidentIntentResponse> {
    struct { }  _has;
    _INPBLocation * _location;
    NSArray * _supportedTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transportTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocation *location;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedTypes;
@property (nonatomic, readonly) unsigned long long supportedTypesCount;
@property (nonatomic, readonly) int*transportTypes;
@property (nonatomic, readonly) unsigned long long transportTypesCount;

+ (Class)supportedTypeType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsTransportTypes:(id)arg1;
- (void)addSupportedType:(id)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearSupportedTypes;
- (void)clearTransportTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (bool)readFrom:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSupportedTypes:(id)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (id)supportedTypeAtIndex:(unsigned long long)arg1;
- (id)supportedTypes;
- (unsigned long long)supportedTypesCount;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (int*)transportTypes;
- (id)transportTypesAsString:(int)arg1;
- (unsigned long long)transportTypesCount;
- (void)writeTo:(id)arg1;

@end
