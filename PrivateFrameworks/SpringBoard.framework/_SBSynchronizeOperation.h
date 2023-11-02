
@interface _SBSynchronizeOperation : NSOperation {
    NSString * _humanReadableDescription;
    NSObject<OS_dispatch_group> * _operationGroup;
    NSMutableArray * _tasks;
}

@property (nonatomic, retain) NSString *humanReadableDescription;

- (void).cxx_destruct;
- (void)addTask:(id /* block */)arg1;
- (id)humanReadableDescription;
- (id)init;
- (void)main;
- (void)setHumanReadableDescription:(id)arg1;

@end
