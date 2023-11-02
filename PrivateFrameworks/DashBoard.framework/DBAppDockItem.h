
@interface DBAppDockItem : NSObject {
    bool  _active;
    NSString * _bundleIdentifier;
    unsigned long long  _category;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long category;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (unsigned long long)category;
- (id)initWithBundleIdentifier:(id)arg1 category:(unsigned long long)arg2 active:(bool)arg3;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAppDockItem:(id)arg1;

@end
