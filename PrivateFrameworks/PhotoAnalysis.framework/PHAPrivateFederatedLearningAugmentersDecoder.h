
@interface PHAPrivateFederatedLearningAugmentersDecoder : NSObject {
    NSDictionary * _augmenterNameToClass;
}

@property (nonatomic, readonly) NSDictionary *augmenterNameToClass;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (id)augmenterNameToClass;
- (id)augmentersFromArray:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)instanceForAugmenterConfig:(id)arg1 error:(id*)arg2;

@end
