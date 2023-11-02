
@interface APSRadarComponentEntry : NSObject {
    NSString * componentID;
    NSString * componentName;
    NSString * componentVersion;
}

@property (nonatomic, readonly) NSString *componentID;
@property (nonatomic, readonly) NSString *componentName;
@property (nonatomic, readonly) NSString *componentVersion;

+ (id)componentEntryWithName:(id)arg1 componentVersion:(id)arg2 componentID:(id)arg3;

- (id)componentID;
- (id)componentName;
- (id)componentVersion;

@end
