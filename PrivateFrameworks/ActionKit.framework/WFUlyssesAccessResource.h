
@interface WFUlyssesAccessResource : WFAccessResource {
    ICScheme * _scheme;
}

@property (nonatomic, readonly) ICScheme *scheme;

+ (bool)refreshesAvailabilityOnApplicationResume;

- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (void)makeAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)protectedResourceDescription;
- (id)scheme;
- (unsigned long long)status;

@end
