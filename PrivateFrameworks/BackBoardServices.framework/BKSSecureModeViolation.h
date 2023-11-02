
@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding> {
    NSArray * _contextIds;
    NSDictionary * _layerNamesByContext;
    NSNumber * _processId;
}

@property (nonatomic, copy) NSArray *contextIds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *layerNamesByContext;
@property (nonatomic, retain) NSNumber *processId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contextIds;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithProcessId:(id)arg1 contextIds:(id)arg2;
- (id)layerNamesByContext;
- (id)processId;
- (void)setContextIds:(id)arg1;
- (void)setLayerNamesByContext:(id)arg1;
- (void)setProcessId:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
