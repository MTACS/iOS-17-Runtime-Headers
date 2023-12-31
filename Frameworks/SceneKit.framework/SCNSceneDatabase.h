
@interface SCNSceneDatabase : NSObject <NSSecureCoding> {
    NSMutableDictionary * _db;
}

+ (id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2;
+ (id)sceneDatabase;
+ (bool)supportsSecureCoding;

- (void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
