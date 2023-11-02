
@interface ATXLazyIntent : NSObject {
    <ATXLazyIntentDelegateProtocol> * _delegate;
    INIntent * _intent;
    NSData * _intentData;
}

@property (nonatomic) <ATXLazyIntentDelegateProtocol> *delegate;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSData *intentData;

- (void).cxx_destruct;
- (id)_deserializeIntent;
- (id)delegate;
- (void)handleMemoryPressure;
- (id)init;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 intentData:(id)arg2;
- (id)initWithIntentData:(id)arg1;
- (id)intent;
- (id)intentData;
- (bool)isDeserialized;
- (void)setDelegate:(id)arg1;

@end
