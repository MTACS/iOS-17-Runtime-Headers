
@interface AVPropertyValuePublisher : AVPublisher {
    NSString * _key;
    NSString * _notificationName;
    NSObject * _object;
}

+ (id)propertyValuePublisherWithObject:(id)arg1 key:(id)arg2 notificationName:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)initWithObject:(id)arg1 key:(id)arg2 notificationName:(id)arg3;
- (id)subscribeRequestingInitialValue:(bool)arg1 block:(id /* block */)arg2;

@end
