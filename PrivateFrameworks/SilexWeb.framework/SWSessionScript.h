
@interface SWSessionScript : NSObject <SWScript> {
    <SWSession> * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *executableScript;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool queueable;
@property (nonatomic, readonly) <SWSession> *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKUserScript *userScript;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithSession:(id)arg1;
- (bool)queueable;
- (id)session;
- (id)userScript;

@end
