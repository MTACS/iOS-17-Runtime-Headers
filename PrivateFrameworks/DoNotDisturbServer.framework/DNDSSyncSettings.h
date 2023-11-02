
@interface DNDSSyncSettings : NSObject <NSCopying, NSMutableCopying> {
    bool  _cloudSyncEnabled;
    bool  _pairSyncEnabled;
}

@property (getter=isCloudSyncEnabled, nonatomic, readonly) bool cloudSyncEnabled;
@property (getter=isPairSyncEnabled, nonatomic, readonly) bool pairSyncEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPairSyncEnabled:(bool)arg1 cloudSyncEnabled:(bool)arg2;
- (bool)isCloudSyncEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isPairSyncEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
