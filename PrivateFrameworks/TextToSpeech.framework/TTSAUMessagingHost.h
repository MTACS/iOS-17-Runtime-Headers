
@interface TTSAUMessagingHost : NSObject <TTSAUMessaging> {
    NSSet * _allowedClasses;
    <AUMessageChannel> * _channel;
    NSDictionary * _methods;
}

@property (nonatomic, retain) NSSet *allowedClasses;
@property (nonatomic, retain) <AUMessageChannel> *channel;
@property (nonatomic, retain) NSDictionary *methods;

+ (id)_validSelectorsForProtocol;

- (void).cxx_destruct;
- (void)_loadProtocolMethods;
- (id)allowedClasses;
- (id)channel;
- (void)forwardInvocation:(id)arg1;
- (id)initWithMessageChannel:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)methods;
- (void)setAllowedClasses:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setMethods:(id)arg1;

@end
