
@interface FTTensorReference : NSObject {
    NSString * _destinationInputName;
    NSString * _sourceNetworkName;
    NSString * _sourceOutputName;
}

@property (nonatomic, retain) NSString *destinationInputName;
@property (nonatomic, retain) NSString *sourceNetworkName;
@property (nonatomic, retain) NSString *sourceOutputName;

- (void).cxx_destruct;
- (id)destinationInputName;
- (void)setDestinationInputName:(id)arg1;
- (void)setSourceNetworkName:(id)arg1;
- (void)setSourceOutputName:(id)arg1;
- (id)sourceNetworkName;
- (id)sourceOutputName;

@end
