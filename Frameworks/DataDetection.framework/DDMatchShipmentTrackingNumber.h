
@interface DDMatchShipmentTrackingNumber : DDMatch {
    NSString * _carrier;
    NSString * _trackingNumber;
}

@property (nonatomic, readonly) NSString *carrier;
@property (nonatomic, readonly) NSString *trackingNumber;

- (void).cxx_destruct;
- (id)carrier;
- (id)initWithDDScannerResult:(id)arg1;
- (id)trackingNumber;

@end
