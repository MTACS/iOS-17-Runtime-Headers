
@interface PUAutoEnhanceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior> {
    PUAdjustmentsDataSource * _dataSource;
}

@property (nonatomic) PUAdjustmentsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (void)dataSource:(id)arg1 adjustmentInfo:(id)arg2 setEnabled:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setDataSource:(id)arg1;

@end
