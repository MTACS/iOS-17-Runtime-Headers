
@interface MTRGroupKeyManagementClusterGroupKeySetStruct : NSObject <NSCopying> {
    NSData * _epochKey0;
    NSData * _epochKey1;
    NSData * _epochKey2;
    NSNumber * _epochStartTime0;
    NSNumber * _epochStartTime1;
    NSNumber * _epochStartTime2;
    NSNumber * _groupKeySecurityPolicy;
    NSNumber * _groupKeySetID;
}

@property (nonatomic, copy) NSData *epochKey0;
@property (nonatomic, copy) NSData *epochKey1;
@property (nonatomic, copy) NSData *epochKey2;
@property (nonatomic, copy) NSNumber *epochStartTime0;
@property (nonatomic, copy) NSNumber *epochStartTime1;
@property (nonatomic, copy) NSNumber *epochStartTime2;
@property (nonatomic, copy) NSNumber *groupKeySecurityPolicy;
@property (nonatomic, copy) NSNumber *groupKeySetID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)epochKey0;
- (id)epochKey1;
- (id)epochKey2;
- (id)epochStartTime0;
- (id)epochStartTime1;
- (id)epochStartTime2;
- (id)groupKeySecurityPolicy;
- (id)groupKeySetID;
- (id)init;
- (void)setEpochKey0:(id)arg1;
- (void)setEpochKey1:(id)arg1;
- (void)setEpochKey2:(id)arg1;
- (void)setEpochStartTime0:(id)arg1;
- (void)setEpochStartTime1:(id)arg1;
- (void)setEpochStartTime2:(id)arg1;
- (void)setGroupKeySecurityPolicy:(id)arg1;
- (void)setGroupKeySetID:(id)arg1;

@end
