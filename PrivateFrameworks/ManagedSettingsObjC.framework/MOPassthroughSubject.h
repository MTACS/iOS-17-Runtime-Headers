
@interface MOPassthroughSubject : MOSubject {
    NSMutableDictionary * _downstreams;
}

@property (nonatomic, readonly) NSMutableDictionary *downstreams;

+ (id)new;

- (void).cxx_destruct;
- (void)disassociate:(id)arg1;
- (id)downstreams;
- (bool)hasSubscriptionWithIdentifier:(id)arg1;
- (id)init;
- (void)sendCompletion:(id)arg1;
- (void)sendValue:(id)arg1;
- (void)subscribe:(id)arg1;

@end
