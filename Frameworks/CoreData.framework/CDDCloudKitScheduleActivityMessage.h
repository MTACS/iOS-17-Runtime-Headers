
@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage {
    unsigned long long  _activityType;
    NSString * _storePath;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
