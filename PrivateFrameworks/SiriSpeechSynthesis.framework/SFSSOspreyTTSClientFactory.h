
@interface SFSSOspreyTTSClientFactory : NSObject {
    NSMutableDictionary * _ospreyClientFactory;
}

@property (nonatomic, retain) NSMutableDictionary *ospreyClientFactory;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getOspreyClientByUrl:(id)arg1;
- (id)getOspreyClientByUrl:(id)arg1 useBlazar:(bool)arg2 enableAuthentication:(bool)arg3;
- (id)init;
- (id)ospreyClientFactory;
- (void)removeAll;
- (void)setOspreyClientFactory:(id)arg1;

@end
