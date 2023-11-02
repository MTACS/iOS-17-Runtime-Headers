
@interface WFPendingNetworkUpdate : NSObject {
    <WFNetworkListRecord> * _network;
}

@property (nonatomic, copy) <WFNetworkListRecord> *network;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNetwork:(id)arg1;
- (id)network;
- (void)setNetwork:(id)arg1;

@end
