
@interface HMBProcessingResult : HMFObject {
    NSArray * _actions;
    NAFuture * _mirrorOutputResult;
    HMBProcessingOptions * _options;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NAFuture *mirrorOutputResult;
@property (nonatomic, readonly) HMBProcessingOptions *options;

- (void).cxx_destruct;
- (id)actions;
- (id)initWithOptions:(id)arg1 actions:(id)arg2 mirrorOutputResult:(id)arg3;
- (id)mirrorOutputResult;
- (id)options;

@end
