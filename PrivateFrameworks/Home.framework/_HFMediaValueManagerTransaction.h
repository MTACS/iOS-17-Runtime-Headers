
@interface _HFMediaValueManagerTransaction : NSObject {
    long long  _playbackState;
    NSNumber * _transactionNumber;
    NAFuture * _writeFuture;
}

@property (nonatomic) long long playbackState;
@property (nonatomic, retain) NSNumber *transactionNumber;
@property (nonatomic, retain) NAFuture *writeFuture;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (long long)playbackState;
- (void)setPlaybackState:(long long)arg1;
- (void)setTransactionNumber:(id)arg1;
- (void)setWriteFuture:(id)arg1;
- (id)transactionNumber;
- (id)writeFuture;

@end
