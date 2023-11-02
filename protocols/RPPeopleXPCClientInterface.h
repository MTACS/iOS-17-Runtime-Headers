
@protocol RPPeopleXPCClientInterface

@required

- (void)xpcPeopleStatusChanged:(unsigned int)arg1;
- (void)xpcPersonChanged:(RPPerson *)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonFound:(RPPerson *)arg1;
- (void)xpcPersonID:(NSString *)arg1 deviceID:(NSString *)arg2 updatedMeasurement:(CURangingMeasurement *)arg3;
- (void)xpcPersonLost:(RPPerson *)arg1;

@end
