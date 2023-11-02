
@interface SCUIAnalytics : NSObject {
    int  _ageGroup;
    BMSource * _biomeSCUISource;
    BMStream * _biomeSCUIStream;
    NSString * _clientBundleID;
}

@property (nonatomic) int ageGroup;
@property (nonatomic, retain) BMSource *biomeSCUISource;
@property (nonatomic, retain) BMStream *biomeSCUIStream;
@property (nonatomic, retain) NSString *clientBundleID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)ageGroup;
- (int)biomeAgeGroup;
- (id)biomeSCUISource;
- (id)biomeSCUIStream;
- (id)clientBundleID;
- (bool)collectUIInteractionEvent:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;
- (id)init;
- (void)setAgeGroup:(int)arg1;
- (void)setBiomeSCUISource:(id)arg1;
- (void)setBiomeSCUIStream:(id)arg1;
- (void)setClientBundleID:(id)arg1;

@end
