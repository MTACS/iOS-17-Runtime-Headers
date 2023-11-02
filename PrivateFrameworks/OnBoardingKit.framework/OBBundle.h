
@interface OBBundle : NSObject {
    NSBundle * _bundle;
    NSString * _bundleVersion;
    NSString * _identifier;
    bool  _isLinkBundle;
    bool  _isPlaceholder;
    NSString * _name;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isLinkBundle;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSBundle *underlyingBundle;

+ (id)bundleAtPath:(id)arg1;
+ (id)bundleAtPath:(id)arg1 isLinkBundle:(bool)arg2;
+ (id)bundleAtPath:(id)arg1 placeholderIdentifier:(id)arg2;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)identifierWithName:(id)arg1;

- (void).cxx_destruct;
- (id)bundle;
- (id)bundleVersion;
- (id)identifier;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundle:(id)arg1 isLinkBundle:(bool)arg2;
- (id)initWithBundle:(id)arg1 placeholderIdentifier:(id)arg2;
- (bool)isLinkBundle;
- (bool)isPlaceholder;
- (id)name;
- (id)privacyFlow;
- (void)setIsLinkBundle:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (id)underlyingBundle;

@end
