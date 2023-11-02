
@interface AXPhoenixMetadataLogger : NSObject {
    NSDateFormatter * _dateFormatter;
    NSString * _metadataFilePath;
    NSDate * _startTimestamp;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) NSString *metadataFilePath;
@property (nonatomic, retain) NSDate *startTimestamp;

- (void).cxx_destruct;
- (id)_deviceModelName;
- (id)_fullHardwareConfigurationString;
- (id)_orientationString;
- (id)dateFormatter;
- (id)initWithMetadata:(id)arg1;
- (id)metadataFilePath;
- (void)setDateFormatter:(id)arg1;
- (void)setMetadataFilePath:(id)arg1;
- (void)setMetadataFilePathUnderDirectory:(id)arg1;
- (void)setStartTimestamp:(id)arg1;
- (id)startTimestamp;
- (void)writeMetadataToFileWithSensors:(id)arg1 withAnnotations:(id)arg2 withFalsePositivesMetadata:(id)arg3;

@end
