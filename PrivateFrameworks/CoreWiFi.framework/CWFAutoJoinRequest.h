
@interface CWFAutoJoinRequest : NSObject <NSCopying> {
    NSUUID * _UUID;
    NSDate * _addedAt;
    bool  _allowAutoHotspotFallback;
    CWFAutoJoinParameters * _parameters;
    id /* block */  _reply;
    bool  _throttled;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSDate *addedAt;
@property (nonatomic) bool allowAutoHotspotFallback;
@property (nonatomic, copy) CWFAutoJoinParameters *parameters;
@property (nonatomic, copy) id /* block */ reply;
@property (nonatomic) bool throttled;

- (void).cxx_destruct;
- (id)UUID;
- (id)addedAt;
- (bool)allowAutoHotspotFallback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)parameters;
- (id /* block */)reply;
- (void)setAddedAt:(id)arg1;
- (void)setAllowAutoHotspotFallback:(bool)arg1;
- (void)setParameters:(id)arg1;
- (void)setReply:(id /* block */)arg1;
- (void)setThrottled:(bool)arg1;
- (void)setUUID:(id)arg1;
- (bool)throttled;

@end
