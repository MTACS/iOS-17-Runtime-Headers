
@interface SiriTurnTakingManager.TTManagerRequest : NSObject {
    void requestId;
    void trpCandidateId;
    void ttCandidates;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
