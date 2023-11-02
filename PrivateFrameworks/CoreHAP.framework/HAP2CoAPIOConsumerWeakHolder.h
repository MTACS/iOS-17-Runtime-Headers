
@interface HAP2CoAPIOConsumerWeakHolder : NSObject {
    <HAP2CoAPIOConsumer> * _consumer;
}

@property (nonatomic, readonly) <HAP2CoAPIOConsumer> *consumer;

+ (id)new;

- (void).cxx_destruct;
- (id)consumer;
- (id)init;
- (id)initWithConsumer:(id)arg1;

@end
