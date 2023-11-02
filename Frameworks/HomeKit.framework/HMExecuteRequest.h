
@interface HMExecuteRequest : HMRequestBase <HMExecuteOperation> {
    HMActionSet * _actionSet;
}

@property (nonatomic, readonly) HMActionSet *actionSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)executeRequestWithActionSet:(id)arg1;

- (void).cxx_destruct;
- (id)actionSet;
- (unsigned long long)hash;
- (id)initWithActionSet:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
