
@interface MRRestrictedCommandClientsManager : NSObject {
    NSArray * _lastAcceptedTokens;
}

@property (nonatomic, retain) NSArray *lastAcceptedTokens;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_restrictCommandClientsTo:(id)arg1;
- (id)lastAcceptedTokens;
- (void)republishStateIfNeeded;
- (id)restrictCommandClientsTo:(id)arg1;
- (void)setLastAcceptedTokens:(id)arg1;

@end
