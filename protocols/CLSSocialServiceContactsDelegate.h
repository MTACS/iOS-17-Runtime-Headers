
@protocol CLSSocialServiceContactsDelegate <NSObject>

@required

- (bool)hasAddressesForMePerson;
- (NSArray *)mePersonAddressesOfType:(unsigned long long)arg1;

@end
