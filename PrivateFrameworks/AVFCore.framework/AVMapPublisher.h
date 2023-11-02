
@interface AVMapPublisher : AVPublisher {
    id /* block */  _transform;
    AVPublisher * _upstream;
}

+ (id)mapPublisherWithUpstream:(id)arg1 transform:(id /* block */)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithUpstream:(id)arg1 transform:(id /* block */)arg2;
- (id)subscribeRequestingInitialValue:(bool)arg1 block:(id /* block */)arg2;

@end
