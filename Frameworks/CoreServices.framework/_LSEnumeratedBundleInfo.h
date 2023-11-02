
@interface _LSEnumeratedBundleInfo : NSObject {
    NSString * _bundleID;
    bool  _isPlaceholder;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) bool isPlaceholder;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 isPlaceholder:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;

@end
