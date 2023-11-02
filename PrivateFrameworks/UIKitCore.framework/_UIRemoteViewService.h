
@interface _UIRemoteViewService : NSObject

@property (nonatomic, readonly, copy) NSUUID *contextToken;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSUUID *multipleInstanceUUID;
@property (nonatomic, readonly) bool multipleInstances;
@property (nonatomic, readonly) bool overridesHostAppearance;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSString *viewControllerClassName;
@property (nonatomic, readonly) NSString *xpcServiceNameRoot;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)_init;
- (void)beginUsing:(id /* block */)arg1;
- (void)endUsing:(id /* block */)arg1;
- (id)init;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;

@end
