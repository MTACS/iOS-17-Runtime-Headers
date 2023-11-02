
@interface WFMDMVerifier : NSObject {
    NSString * _actionName;
    NSArray * _contentAttributionSets;
}

@property (nonatomic, readonly, copy) NSString *actionName;
@property (nonatomic, readonly, copy) NSArray *contentAttributionSets;

+ (id)contentAttributionsFromContentAttributionSets:(id)arg1 withManagedLevel:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)actionName;
- (bool)canSendDataToContentDestination:(id)arg1 error:(id*)arg2;
- (id)contentAttributionSets;
- (id)errorFromFailedVerificationContentAttributionSets:(id)arg1 contentDestination:(id)arg2 destinationManagedLevel:(unsigned long long)arg3;
- (id)initWithAction:(id)arg1;
- (id)initWithContentAttributionSets:(id)arg1 actionName:(id)arg2;

@end
