
@interface ISSiriConversation : NSObject {
    void turns;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSUUID *firstTurnId;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSArray *turns;

- (void).cxx_destruct;
- (id)date;
- (id)firstTurnId;
- (id)init;
- (id)initWithTurns:(id)arg1;
- (double)timestamp;
- (id)turns;

@end
