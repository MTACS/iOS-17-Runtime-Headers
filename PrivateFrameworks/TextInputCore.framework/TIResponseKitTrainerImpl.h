
@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>

+ (id)sharedTrainer;

- (id)_init;
- (bool)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id*)arg3;
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
