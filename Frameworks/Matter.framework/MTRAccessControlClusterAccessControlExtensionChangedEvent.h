
@interface MTRAccessControlClusterAccessControlExtensionChangedEvent : NSObject <NSCopying> {
    NSNumber * _adminNodeID;
    NSNumber * _adminPasscodeID;
    NSNumber * _changeType;
    NSNumber * _fabricIndex;
    MTRAccessControlClusterAccessControlExtensionStruct * _latestValue;
}

@property (nonatomic, copy) NSNumber *adminNodeID;
@property (nonatomic, copy) NSNumber *adminPasscodeID;
@property (nonatomic, copy) NSNumber *changeType;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) MTRAccessControlClusterAccessControlExtensionStruct *latestValue;

- (void).cxx_destruct;
- (id)adminNodeID;
- (id)adminPasscodeID;
- (id)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fabricIndex;
- (id)init;
- (id)latestValue;
- (void)setAdminNodeID:(id)arg1;
- (void)setAdminPasscodeID:(id)arg1;
- (void)setChangeType:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setLatestValue:(id)arg1;

@end
