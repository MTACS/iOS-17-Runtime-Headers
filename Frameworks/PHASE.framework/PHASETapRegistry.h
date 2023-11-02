
@interface PHASETapRegistry : NSObject {
    NSMutableSet * _descriptions;
    PHASEEngine * _weakEngine;
}

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEngine:(id)arg1;
- (bool)registerTapReceiverForDescription:(id)arg1 block:(id /* block */)arg2;
- (bool)registerTapReceiverWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)reset;
- (id)tapReceiverFormatForDescription:(id)arg1;
- (id)tapReceiverFormatForIdentifier:(id)arg1;
- (void)unregisterTapReceiverForDescription:(id)arg1;
- (void)unregisterTapReceiverWithIdentifier:(id)arg1;

@end
