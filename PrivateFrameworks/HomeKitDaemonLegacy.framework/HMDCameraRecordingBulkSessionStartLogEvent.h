
@interface HMDCameraRecordingBulkSessionStartLogEvent : HMMLogEvent {
    NSString * _accessoryIdentifier;
}

@property (nonatomic, readonly) NSString *accessoryIdentifier;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)initWithAccessoryIdentifier:(id)arg1;

@end
