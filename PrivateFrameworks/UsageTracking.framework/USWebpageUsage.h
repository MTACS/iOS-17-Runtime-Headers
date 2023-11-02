
@interface USWebpageUsage : NSObject {
    NSURL * _URL;
    NSString * _bundleIdentifier;
    <_CDAsyncLocalContext> * _context;
    NSMutableDictionary * _contextUsageRecord;
    <_DKKnowledgeSaving> * _eventStorage;
    NSString * _profileIdentifier;
    BMSource * _source;
    int  _state;
    NSString * _uniqueIdentifier;
    bool  _usageTrusted;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) <_CDAsyncLocalContext> *context;
@property (readonly) <_DKKnowledgeSaving> *eventStorage;
@property (readonly, copy) NSString *profileIdentifier;
@property (readonly) BMSource *source;
@property int state;
@property (readonly, copy) NSString *uniqueIdentifier;
@property (readonly) bool usageTrusted;

+ (id)getProcessIdentifier;

- (void).cxx_destruct;
- (id)URL;
- (id)bundleIdentifier;
- (void)changeState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)eventStorage;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(struct { unsigned int x1[8]; })arg3;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 profileIdentifier:(id)arg3;
- (id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3 source:(id)arg4 bundleIdentifier:(id)arg5 profileIdentifier:(id)arg6 usageTrusted:(bool)arg7;
- (id)profileIdentifier;
- (void)setState:(int)arg1;
- (id)source;
- (int)state;
- (id)uniqueIdentifier;
- (bool)usageTrusted;

@end
