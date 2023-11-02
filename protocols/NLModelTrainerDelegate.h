
@protocol NLModelTrainerDelegate <NSObject>

@optional

- (void)modelTrainer:(NLModelTrainer *)arg1 logMessage:(NSString *)arg2;
- (bool)modelTrainerShouldStop:(NLModelTrainer *)arg1;

@end
