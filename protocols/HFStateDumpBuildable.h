
@protocol HFStateDumpBuildable <NSObject>

@required

- (HFStateDumpBuilder *)hf_stateDumpBuilderWithContext:(HFStateDumpBuilderContext *)arg1;

@optional

+ (bool)hf_prefersAutoSynthesizedDescription;

@end
