
@interface XPCStreamEventRegistration : NSObject {
    Class  _dagServiceClass;
    NSString * _eventName;
    NSString * _streamName;
}

@property (nonatomic, readonly) Class dagServiceClass;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSString *streamName;

+ (id)registrationWithStream:(id)arg1 eventName:(id)arg2 dagServiceClass:(Class)arg3;

- (void).cxx_destruct;
- (id)_initWithStream:(id)arg1 eventName:(id)arg2 dagServiceClass:(Class)arg3;
- (Class)dagServiceClass;
- (id)eventName;
- (void)invoke:(id)arg1 fromStream:(id)arg2 withAssets:(id)arg3 withSelfMetadata:(id)arg4;
- (id)streamName;

@end
