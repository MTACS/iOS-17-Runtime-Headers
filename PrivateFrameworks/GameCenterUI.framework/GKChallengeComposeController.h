
@interface GKChallengeComposeController : GKSimpleComposeController {
    GKChallenge * _challenge;
    GKComposeHeaderField * _challengeField;
    NSArray * _playersToLoad;
}

@property (nonatomic, retain) GKChallenge *challenge;
@property (nonatomic, retain) GKComposeHeaderField *challengeField;
@property (nonatomic, retain) NSArray *playersToLoad;

+ (void)composeAndSendFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(bool)arg4 readyHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (id)composeFlowForChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)friendPickerFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)cancel;
- (id)challenge;
- (id)challengeField;
- (void)donePressed;
- (id)init;
- (id)initWithChallenge:(id)arg1 defaultMessage:(id)arg2 players:(id)arg3;
- (void)loadView;
- (id)playersToLoad;
- (void)setChallenge:(id)arg1;
- (void)setChallengeField:(id)arg1;
- (void)setPlayersToLoad:(id)arg1;
- (void)updateChallengeText;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
