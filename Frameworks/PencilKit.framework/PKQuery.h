
@interface PKQuery : NSObject {
    id  _delegate;
    PKRecognitionSessionManager * _sessionManager;
}

@property (nonatomic) id delegate;
@property (nonatomic) PKRecognitionSessionManager *sessionManager;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithRecognitionSessionManager:(id)arg1;
- (void)pause;
- (id)sessionManager;
- (void)setDelegate:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)start;
- (void)teardown;

@end
