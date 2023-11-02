
@interface UPContextualizerStrategyCancel : NSObject <UPContextualizerStrategy> {
    double  _prebuiltIntentThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double prebuiltIntentThreshold;
@property (readonly) Class superclass;

- (id)initWithPrebuiltIntentThreshold:(double)arg1;
- (double)prebuiltIntentThreshold;
- (id)resultUsingContextualizerInput:(id)arg1;

@end
