
@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCSecureCoding> {
    RCPMovie * _recapMovie;
    SSUIRunPPTServiceRequest * _runPPTServiceRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RCPMovie *recapMovie;
@property (nonatomic, retain) SSUIRunPPTServiceRequest *runPPTServiceRequest;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)recapMovie;
- (id)runPPTServiceRequest;
- (void)setRecapMovie:(id)arg1;
- (void)setRunPPTServiceRequest:(id)arg1;

@end
