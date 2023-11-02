
@interface MTRDescriptorClusterDeviceTypeStruct : NSObject <NSCopying> {
    NSNumber * _deviceType;
    NSNumber * _revision;
}

@property (nonatomic, copy) NSNumber *deviceType;
@property (nonatomic, copy) NSNumber *revision;
@property (nonatomic, copy) NSNumber *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceType;
- (id)init;
- (id)revision;
- (void)setDeviceType:(id)arg1;
- (void)setRevision:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
