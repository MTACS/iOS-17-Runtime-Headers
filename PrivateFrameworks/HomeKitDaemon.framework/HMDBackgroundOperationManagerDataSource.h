
@interface HMDBackgroundOperationManagerDataSource : HMFObject {
    HMDBackgroundOperationManager * _owner;
}

@property (readonly) HMDBackgroundOperationManager *owner;
@property (readonly, copy) NSDictionary *values;

+ (id)name;

- (void).cxx_destruct;
- (id)initWithOperationManager:(id)arg1;
- (void)notifyDataSourceChanged;
- (id)owner;
- (id)values;

@end
