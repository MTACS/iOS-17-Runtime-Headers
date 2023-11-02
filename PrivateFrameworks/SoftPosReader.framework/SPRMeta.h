
@interface SPRMeta : NSObject {
    NSBundle * _bundle;
    NSString * _timestamp;
}

@property (readonly, copy) NSDate *buildDate;
@property (readonly) NSBundle *bundle;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundleVersion;

+ (id)current;

- (void).cxx_destruct;
- (id)buildDate;
- (id)bundle;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)description;
- (id)initWithBundle:(id)arg1 timestamp:(id)arg2;

@end
