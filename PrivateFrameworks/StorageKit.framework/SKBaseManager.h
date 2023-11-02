
@interface SKBaseManager : NSObject {
    bool  _supportsCocoa;
}

@property (nonatomic, readonly) bool supportsCocoa;

+ (id)defaultVisibleRoles;
+ (id)sharedManager;

- (id)allDisks;
- (id)formatableFileSystems;
- (id)init;
- (id)knownDiskForDictionary:(id)arg1;
- (bool)supportsCocoa;

@end
