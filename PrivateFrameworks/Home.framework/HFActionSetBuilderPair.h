
@interface HFActionSetBuilderPair : NSObject {
    HMActionSet * _actionSet;
    HMActionSetBuilder * _builder;
}

@property (nonatomic, readonly) HMActionSet *actionSet;
@property (nonatomic, readonly) HMActionSetBuilder *builder;

- (void).cxx_destruct;
- (id)actionSet;
- (id)builder;
- (id)commitActionSetInHome:(id)arg1;
- (id)initWithActionSet:(id)arg1 builder:(id)arg2;
- (id)initWithBuilder:(id)arg1;

@end
