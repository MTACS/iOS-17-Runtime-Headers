
@interface AISChildSetupFlowResult : NSObject {
    void authResponse;
}

@property (nonatomic, readonly) AISAuthenticationResponse *authResponse;
@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (id)authResponse;
- (id)error;
- (id)init;

@end
