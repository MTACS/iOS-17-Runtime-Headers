
@interface HAPComponent : HMFObject {
    <HAPBTLECentralManagerDelegate> * centralManagerDelegate;
}

@property (nonatomic) <HAPBTLECentralManagerDelegate> *centralManagerDelegate;

- (void).cxx_destruct;
- (id)centralManagerDelegate;
- (id)initWithDelegate:(id)arg1;
- (void)setCentralManagerDelegate:(id)arg1;

@end
