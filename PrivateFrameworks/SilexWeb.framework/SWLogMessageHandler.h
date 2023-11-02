
@interface SWLogMessageHandler : NSObject <SWMessageHandler> {
    <SWLogger> * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithLogger:(id)arg1;
- (id)logger;

@end
