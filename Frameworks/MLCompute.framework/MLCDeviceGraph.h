
@interface MLCDeviceGraph : NSObject {
    MLCDevice * _device;
    NSMutableArray * _graphLayerList;
    NSMutableSet * _liveInputs;
    NSMutableSet * _liveOutputs;
}

@property (nonatomic, readonly, retain) MLCDevice *device;
@property (nonatomic, retain) NSMutableArray *graphLayerList;
@property (nonatomic) NSMutableSet *liveInputs;
@property (nonatomic) NSMutableSet *liveOutputs;

+ (id)deviceGraphWithLayers:(id)arg1 device:(id)arg2;

- (void).cxx_destruct;
- (id)device;
- (id)graphLayerList;
- (id)initDeviceGraphWithLayers:(id)arg1 device:(id)arg2;
- (id)liveInputs;
- (id)liveOutputs;
- (void)setGraphLayerList:(id)arg1;
- (void)setLiveInputs:(id)arg1;
- (void)setLiveOutputs:(id)arg1;

@end
