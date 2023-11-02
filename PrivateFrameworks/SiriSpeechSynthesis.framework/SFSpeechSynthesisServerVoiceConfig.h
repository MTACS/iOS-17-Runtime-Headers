
@interface SFSpeechSynthesisServerVoiceConfig : NSObject {
    bool  _enableAuthentication;
    NSString * _ospreyEndpointUrl;
    bool  _useBlazar;
}

@property (nonatomic, readonly) bool enableAuthentication;
@property (nonatomic, readonly) NSString *ospreyEndpointUrl;
@property (nonatomic, readonly) bool useBlazar;

+ (id)getTtsServerEndpointByCluster:(id)arg1 withServiceType:(id)arg2;

- (void).cxx_destruct;
- (bool)enableAuthentication;
- (id)initWithUrl:(id)arg1 useBlazar:(bool)arg2 enableAuthentication:(bool)arg3;
- (id)ospreyEndpointUrl;
- (bool)useBlazar;

@end
