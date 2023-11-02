
@interface CDPCALocalSecretReporter : CDPCAReporter

- (void)didChangeLocalSecret;
- (void)didRemoveLocalSecret;
- (id)init;

@end
