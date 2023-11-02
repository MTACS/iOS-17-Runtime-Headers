
@interface IRNodeDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _avOutpuDeviceIdentifier;
    IRAVOutputDeviceDO * _avOutputDevice;
    NSString * _idsIdentifier;
    IRRapportDeviceDO * _rapportDevice;
    NSString * _rapportIdentifier;
}

@property (nonatomic, readonly) NSString *avOutpuDeviceIdentifier;
@property (nonatomic, readonly) IRAVOutputDeviceDO *avOutputDevice;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) IRRapportDeviceDO *rapportDevice;
@property (nonatomic, readonly) NSString *rapportIdentifier;

+ (id)nodeDOFromNode:(id)arg1;
+ (id)nodeDOWithAvOutpuDeviceIdentifier:(id)arg1 rapportIdentifier:(id)arg2 idsIdentifier:(id)arg3 avOutputDevice:(id)arg4 rapportDevice:(id)arg5;
+ (id)nodeFromNodeDO:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avOutpuDeviceIdentifier;
- (id)avOutputDevice;
- (id)computeName;
- (id)computedIdsIdentifier;
- (id)computedMediaRemoteIdenfifier;
- (id)computedMediaRouteIdentifier;
- (id)copyWithReplacementAvOutpuDeviceIdentifier:(id)arg1;
- (id)copyWithReplacementAvOutputDevice:(id)arg1;
- (id)copyWithReplacementIdsIdentifier:(id)arg1;
- (id)copyWithReplacementRapportDevice:(id)arg1;
- (id)copyWithReplacementRapportIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (id)init;
- (id)initWithAvOutpuDeviceIdentifier:(id)arg1 rapportIdentifier:(id)arg2 idsIdentifier:(id)arg3 avOutputDevice:(id)arg4 rapportDevice:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNodeDO:(id)arg1;
- (id)rapportDevice;
- (id)rapportIdentifier;

@end
