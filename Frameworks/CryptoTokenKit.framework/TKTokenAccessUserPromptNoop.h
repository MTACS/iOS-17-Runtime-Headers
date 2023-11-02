
@interface TKTokenAccessUserPromptNoop : NSObject <TKTokenAccessUserPrompt> {
    long long  _preflightStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preflightStatus;
@property (readonly) Class superclass;

- (id)initWithPreflightStatus:(long long)arg1;
- (long long)preflightStatus;
- (long long)promptUserToEvaluateRequest:(id)arg1 error:(id*)arg2;
- (void)setPreflightStatus:(long long)arg1;

@end
