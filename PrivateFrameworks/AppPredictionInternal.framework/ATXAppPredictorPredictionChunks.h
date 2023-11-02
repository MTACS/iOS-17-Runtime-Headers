
@interface ATXAppPredictorPredictionChunks : NSObject {
    NSData * _feedbackStateChunk;
    NSData * _predictionSetChunk;
}

@property (nonatomic, retain) NSData *feedbackStateChunk;
@property (nonatomic, retain) NSData *predictionSetChunk;

- (void).cxx_destruct;
- (id)chunkArray;
- (id)feedbackStateChunk;
- (id)init;
- (id)initWithPredictionSetChunk:(id)arg1 feedbackStateChunk:(id)arg2;
- (id)joinChunks;
- (id)predictionSetChunk;
- (void)setFeedbackStateChunk:(id)arg1;
- (void)setPredictionSetChunk:(id)arg1;

@end
