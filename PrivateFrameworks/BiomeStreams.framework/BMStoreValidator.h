
@interface BMStoreValidator : NSObject {
    NSString * _identifier;
    BPSBiomeStorePublisher * _publisher;
}

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2;
- (int)isChronologicallyValidFromBookmark:(id)arg1 shouldContinue:(id /* block */)arg2;
- (int)isChronologicallyValidFromTimestamp:(double)arg1;
- (int)isChronologicallyValidFromTimestamp:(double)arg1 shouldContinue:(id /* block */)arg2;
- (int)isChronologicallyValidWithPublisher:(id)arg1 shouldContinue:(id /* block */)arg2;

@end
