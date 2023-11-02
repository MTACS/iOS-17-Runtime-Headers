
@interface AAClient : NSObject {
    void build;
    void buildNumber;
    void identifier;
    void name;
    void version;
}

@property (nonatomic, readonly) long long build;
@property (nonatomic, readonly) NSString *buildNumber;
@property (nonatomic, readonly) NSString *fullVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (long long)build;
- (id)buildNumber;
- (id)fullVersion;
- (id)identifier;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3 build:(long long)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3 buildNumber:(id)arg4;
- (id)name;
- (id)version;

@end
