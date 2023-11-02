
@interface HAENSystemSoundPlayer : NSObject {
    NSDictionary * _options;
    bool  _turnOFFSound;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)playSystemSoundWithEvent:(id)arg1 completion:(id /* block */)arg2;

@end
