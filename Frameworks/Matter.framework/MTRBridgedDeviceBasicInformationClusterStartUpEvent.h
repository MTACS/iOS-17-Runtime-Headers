
@interface MTRBridgedDeviceBasicInformationClusterStartUpEvent : NSObject <NSCopying> {
    NSNumber * _softwareVersion;
}

@property (nonatomic, copy) NSNumber *softwareVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setSoftwareVersion:(id)arg1;
- (id)softwareVersion;

@end
