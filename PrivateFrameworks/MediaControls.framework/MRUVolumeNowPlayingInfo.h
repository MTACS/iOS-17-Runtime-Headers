
@interface MRUVolumeNowPlayingInfo : NSObject {
    NSString * _bundleID;
    NSString * _formatDescription;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *formatDescription;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)bundleID;
- (id)formatDescription;
- (id)initWithBundleID:(id)arg1 name:(id)arg2 formatDescription:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
