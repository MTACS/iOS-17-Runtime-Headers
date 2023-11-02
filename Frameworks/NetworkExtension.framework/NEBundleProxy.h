
@interface NEBundleProxy : NSObject <NSSecureCoding> {
    NSArray * _appGroups;
    NSString * _identifier;
    bool  _isWatchKitApp;
    NSArray * _machOUUIDs;
    NSString * _name;
    NSURL * _url;
}

@property (nonatomic, readonly, retain) NSArray *appGroups;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic) bool isWatchKitApp;
@property (nonatomic, readonly, retain) NSArray *machOUUIDs;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appGroups;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 url:(id)arg2 machOUUIDs:(id)arg3 name:(id)arg4 appGroups:(id)arg5;
- (bool)isWatchKitApp;
- (id)machOUUIDs;
- (id)name;
- (void)setIsWatchKitApp:(bool)arg1;
- (id)url;

@end
