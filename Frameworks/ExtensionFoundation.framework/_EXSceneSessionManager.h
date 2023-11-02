
@interface _EXSceneSessionManager : NSObject {
    NSMutableDictionary * __sessions;
}

@property (readonly) NSMutableDictionary *_sessions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_sessions;
- (void)addSession:(id)arg1;
- (void)removeSessionForIdentifier:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (id)sessions;

@end
