
@interface WDClinicalGatewayProxy : NSObject {
    NSString * _batchID;
    NSString * _gatewayID;
}

@property (nonatomic, readonly, copy) NSString *batchID;
@property (nonatomic, readonly, copy) NSString *gatewayID;

- (void).cxx_destruct;
- (id)batchID;
- (id)gatewayID;
- (id)init;
- (id)initWithGatewayID:(id)arg1 batchID:(id)arg2;

@end
