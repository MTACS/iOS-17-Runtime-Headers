
@interface _INPBGetReservationDetailsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBGetReservationDetailsIntentResponse> {
    struct { }  _has;
    NSArray * _reservations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *reservations;
@property (nonatomic, readonly) unsigned long long reservationsCount;
@property (readonly) Class superclass;

+ (Class)reservationsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addReservations:(id)arg1;
- (void)clearReservations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reservations;
- (id)reservationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)reservationsCount;
- (void)setReservations:(id)arg1;
- (void)writeTo:(id)arg1;

@end
