
@interface TMLApplication : NSObject

@property (nonatomic, readonly) NSString *applicationVersion;
@property (nonatomic, readonly) NSString *hardwareModel;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (id)applicationVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)hardwareModel;

@end
