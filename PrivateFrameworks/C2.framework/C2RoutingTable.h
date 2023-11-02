
@interface C2RoutingTable : NSObject {
    NSMutableDictionary * _routingTable;
}

@property (nonatomic, retain) NSMutableDictionary *routingTable;

- (void).cxx_destruct;
- (id)copyAndDecorateRequest:(id)arg1;
- (id)init;
- (id)routingTable;
- (void)setRoutingTable:(id)arg1;
- (void)updateOriginalHostname:(id)arg1 destinationHostname:(id)arg2;

@end
