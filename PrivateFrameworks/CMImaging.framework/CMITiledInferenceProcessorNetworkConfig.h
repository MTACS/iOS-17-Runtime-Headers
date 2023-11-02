
@interface CMITiledInferenceProcessorNetworkConfig : NSObject {
    <CMIInferenceNetwork> * _network;
    NSArray * _networkInputNames;
    NSArray * _networkOutputNames;
    NSString * _networkPath;
}

@property (nonatomic, retain) <CMIInferenceNetwork> *network;
@property (nonatomic, retain) NSArray *networkInputNames;
@property (nonatomic, retain) NSArray *networkOutputNames;
@property (nonatomic, retain) NSString *networkPath;

- (void).cxx_destruct;
- (bool)isEspressoV2Path;
- (id)network;
- (id)networkInputNames;
- (id)networkOutputNames;
- (id)networkPath;
- (void)setNetwork:(id)arg1;
- (void)setNetworkInputNames:(id)arg1;
- (void)setNetworkOutputNames:(id)arg1;
- (void)setNetworkPath:(id)arg1;

@end
