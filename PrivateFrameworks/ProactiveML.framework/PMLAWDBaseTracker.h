
@interface PMLAWDBaseTracker : NSObject {
    AWDProactiveModelFittingModelInfo * _modelInfo;
}

@property (nonatomic, readonly) AWDProactiveModelFittingModelInfo *modelInfo;

+ (id)trackerForModelName:(id)arg1 modelVersion:(id)arg2 modelLocale:(id)arg3;
+ (id)trackerForPlanId:(id)arg1;

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;
- (id)modelInfo;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;

@end
