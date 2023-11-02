
@interface BPSSubscriberList : NSObject {
    NSMutableArray * _items;
    long long  _nextTicket;
    NSMutableArray * _tickets;
}

@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic) long long nextTicket;
@property (nonatomic, retain) NSMutableArray *tickets;

- (void).cxx_destruct;
- (long long)appendElement:(id)arg1;
- (id)claimAll;
- (id)init;
- (id)items;
- (long long)nextTicket;
- (void)removeTicket:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setNextTicket:(long long)arg1;
- (void)setTickets:(id)arg1;
- (id)tickets;

@end
