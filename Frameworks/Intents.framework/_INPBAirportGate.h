
@interface _INPBAirportGate : PBCodable <NSCopying, NSSecureCoding, _INPBAirportGate> {
    _INPBAirport * _airport;
    NSString * _gate;
    struct { }  _has;
    NSString * _terminal;
}

@property (nonatomic, retain) _INPBAirport *airport;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *gate;
@property (nonatomic, readonly) bool hasAirport;
@property (nonatomic, readonly) bool hasGate;
@property (nonatomic, readonly) bool hasTerminal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *terminal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airport;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)gate;
- (bool)hasAirport;
- (bool)hasGate;
- (bool)hasTerminal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAirport:(id)arg1;
- (void)setGate:(id)arg1;
- (void)setTerminal:(id)arg1;
- (id)terminal;
- (void)writeTo:(id)arg1;

@end
