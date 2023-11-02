
@interface SCAnalytics : NSObject {
    int  _ageGroup;
    BMSource * _biomeMASSource;
    BMStream * _biomeMASStream;
    NSString * _clientBundleID;
}

@property (nonatomic) int ageGroup;
@property (nonatomic, retain) BMSource *biomeMASSource;
@property (nonatomic, retain) BMStream *biomeMASStream;
@property (nonatomic, retain) NSString *clientBundleID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)ageGroup;
- (int)biomeAgeGroup;
- (id)biomeMASSource;
- (id)biomeMASStream;
- (id)clientBundleID;
- (bool)collectMediaAnalysisServiceEvent:(int)arg1 :(bool)arg2;
- (id)init;
- (void)setAgeGroup:(int)arg1;
- (void)setBiomeMASSource:(id)arg1;
- (void)setBiomeMASStream:(id)arg1;
- (void)setClientBundleID:(id)arg1;

@end
