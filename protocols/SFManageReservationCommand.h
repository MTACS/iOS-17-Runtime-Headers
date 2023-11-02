
@protocol SFManageReservationCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (bool)placeHolderProperty;
- (void)setPlaceHolderProperty:(bool)arg1;

@end
