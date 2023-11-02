
@protocol GCDevicePhysicalInputState <NSObject>

@required

- (GCPhysicalInputElementCollection *)axes;
- (GCPhysicalInputElementCollection *)buttons;
- (<GCDevice> *)device;
- (GCPhysicalInputElementCollection *)dpads;
- (GCPhysicalInputElementCollection *)elements;
- (double)lastEventLatency;
- (double)lastEventTimestamp;
- (<GCPhysicalInputElement> *)objectForKeyedSubscript:(NSString *)arg1;
- (GCPhysicalInputElementCollection *)switches;

@end
