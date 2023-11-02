
@interface _SFPBCreateCalendarEventCommand : PBCodable <NSSecureCoding, _SFPBCreateCalendarEventCommand> {
    _SFPBCalendarEvent * _event;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBCalendarEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)event;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)writeTo:(id)arg1;

@end
