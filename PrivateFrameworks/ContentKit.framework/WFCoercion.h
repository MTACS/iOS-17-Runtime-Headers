
@interface WFCoercion : NSObject {
    WFCoercionHandler * _handler;
    WFType * _type;
}

@property (nonatomic, readonly) WFCoercionHandler *handler;
@property (nonatomic, readonly) WFType *type;

+ (id)coercionToClass:(Class)arg1 handler:(id)arg2;
+ (id)coercionToType:(id)arg1 handler:(id)arg2;

- (void).cxx_destruct;
- (bool)canProduceType:(id)arg1;
- (bool)canProduceType:(id)arg1 withConcurrencyMode:(long long)arg2;
- (id)description;
- (id)handler;
- (id)initWithType:(id)arg1 handler:(id)arg2;
- (id)type;

@end
