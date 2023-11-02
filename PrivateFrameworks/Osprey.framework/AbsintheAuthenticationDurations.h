
@interface AbsintheAuthenticationDurations : NSObject {
    NSNumber * _absintheElapsed;
    NSMutableDictionary * _absintheTimestamps;
    NSMutableString * _connectionMethod;
    NSNumber * _createSessionElapsed;
    NSNumber * _getCertificateElapsed;
    NSNumber * _sessionEstablishedElapsed;
}

@property (nonatomic, retain) NSNumber *absintheElapsed;
@property (nonatomic, retain) NSMutableDictionary *absintheTimestamps;
@property (nonatomic, retain) NSMutableString *connectionMethod;
@property (nonatomic, retain) NSNumber *createSessionElapsed;
@property (nonatomic, retain) NSNumber *getCertificateElapsed;
@property (nonatomic, retain) NSNumber *sessionEstablishedElapsed;

- (void).cxx_destruct;
- (id)absintheElapsed;
- (id)absintheTimestamps;
- (id)calculateDuration:(id)arg1 and:(id)arg2;
- (id)connectionMethod;
- (id)createSessionElapsed;
- (id)getCertificateElapsed;
- (id)init;
- (void)reportAbsintheAuthenticationDurations;
- (id)sessionEstablishedElapsed;
- (void)setAbsintheAuthenticationTimestampForKey:(id)arg1;
- (void)setAbsintheConnectionMethodWith:(id)arg1;
- (void)setAbsintheElapsed:(id)arg1;
- (void)setAbsintheTimestamps:(id)arg1;
- (void)setConnectionMethod:(id)arg1;
- (void)setCreateSessionElapsed:(id)arg1;
- (void)setGetCertificateElapsed:(id)arg1;
- (void)setSessionEstablishedElapsed:(id)arg1;

@end
