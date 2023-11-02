
@interface NLPModelTrainingDelegate : NSObject <NLModelTrainerDelegate> {
    id /* block */  _logHandler;
    bool  _stop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLogHandler:(id /* block */)arg1;
- (void)modelTrainer:(id)arg1 logMessage:(id)arg2;
- (bool)modelTrainerShouldStop:(id)arg1;

@end
