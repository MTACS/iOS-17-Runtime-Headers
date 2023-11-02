
@interface JFXCompositionPlayerRequest : NSObject {
    id /* block */  _block;
    id /* block */  _completionBlock;
    JFXCompositionPlayer * _player;
    double  _queuedTime;
    unsigned long long  _signPostID;
    double  _startTime;
    unsigned long long  _type;
    NSString * _uniqueID;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) id /* block */ completionBlock;
@property JFXCompositionPlayer *player;
@property (nonatomic) double queuedTime;
@property (nonatomic, readonly) unsigned long long signPostID;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)stringFromRequestType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (id /* block */)completionBlock;
- (id)description;
- (void)didBegin;
- (void)didCancel;
- (void)didComplete;
- (void)didEnqueue;
- (id)initWithBlock:(id /* block */)arg1 ofType:(unsigned long long)arg2;
- (id)player;
- (double)queuedTime;
- (void)setBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setPlayer:(id)arg1;
- (void)setQueuedTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)signPostID;
- (double)startTime;
- (unsigned long long)type;
- (id)uniqueID;

@end
