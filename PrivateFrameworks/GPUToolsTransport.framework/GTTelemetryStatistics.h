
@interface GTTelemetryStatistics : NSObject <NSSecureCoding> {
    NSArray * _devices;
    NSArray * _layers;
    NSArray * _queues;
}

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) NSArray *layers;
@property (nonatomic, copy) NSArray *queues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)layers;
- (id)queues;
- (void)setDevices:(id)arg1;
- (void)setLayers:(id)arg1;
- (void)setQueues:(id)arg1;

@end
