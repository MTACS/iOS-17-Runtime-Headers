
@interface SGRealtimeSuggestionsTuple : NSObject {
    NSArray * _contacts;
    NSArray * _deliveries;
    NSArray * _events;
    NSArray * _invalidatedIdentifiers;
    NSArray * _reminders;
    NSArray * _walletOrders;
    NSArray * _walletPasses;
}

@property (retain) NSArray *contacts;
@property (retain) NSArray *deliveries;
@property (retain) NSArray *events;
@property (retain) NSArray *invalidatedIdentifiers;
@property (retain) NSArray *reminders;
@property (retain) NSArray *walletOrders;
@property (retain) NSArray *walletPasses;

- (void).cxx_destruct;
- (id)combinedSuggestions;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deliveries;
- (id)description;
- (id)events;
- (id)invalidatedIdentifiers;
- (id)reminders;
- (void)setContacts:(id)arg1;
- (void)setDeliveries:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setInvalidatedIdentifiers:(id)arg1;
- (void)setReminders:(id)arg1;
- (void)setWalletOrders:(id)arg1;
- (void)setWalletPasses:(id)arg1;
- (unsigned long long)suggestionsCount;
- (id)walletOrders;
- (id)walletPasses;

@end
