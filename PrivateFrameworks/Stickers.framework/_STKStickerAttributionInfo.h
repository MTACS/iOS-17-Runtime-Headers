
@interface _STKStickerAttributionInfo : NSObject {
    void adamID;
    void bundleIdentifier;
    void name;
}

@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)adamID;
- (id)bundleIdentifier;
- (id)description;
- (id)init;
- (id)initWithAdamID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3;
- (id)name;

@end
