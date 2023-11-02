
@interface _INPBSeat : PBCodable <NSCopying, NSSecureCoding, _INPBSeat> {
    struct { }  _has;
    NSString * _seatNumber;
    NSString * _seatRow;
    NSString * _seatSection;
    NSString * _seatingType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSeatNumber;
@property (nonatomic, readonly) bool hasSeatRow;
@property (nonatomic, readonly) bool hasSeatSection;
@property (nonatomic, readonly) bool hasSeatingType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *seatNumber;
@property (nonatomic, copy) NSString *seatRow;
@property (nonatomic, copy) NSString *seatSection;
@property (nonatomic, copy) NSString *seatingType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSeatNumber;
- (bool)hasSeatRow;
- (bool)hasSeatSection;
- (bool)hasSeatingType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)seatNumber;
- (id)seatRow;
- (id)seatSection;
- (id)seatingType;
- (void)setSeatNumber:(id)arg1;
- (void)setSeatRow:(id)arg1;
- (void)setSeatSection:(id)arg1;
- (void)setSeatingType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
