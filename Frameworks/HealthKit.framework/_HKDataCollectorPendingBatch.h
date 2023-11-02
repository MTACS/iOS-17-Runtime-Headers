
@interface _HKDataCollectorPendingBatch : NSObject {
    NSUUID * _batchUUID;
    NSArray * _completions;
    NSArray * _data;
    HKDevice * _device;
    NSDictionary * _metadata;
}

@property (nonatomic, readonly, copy) NSUUID *batchUUID;
@property (nonatomic, readonly, copy) NSArray *completions;
@property (nonatomic, readonly, copy) NSArray *data;
@property (nonatomic, readonly, copy) HKDevice *device;
@property (nonatomic, readonly, copy) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)batchByAddingData:(id)arg1 completion:(id /* block */)arg2;
- (id)batchUUID;
- (void)callCompletionsWithSuccess:(bool)arg1 error:(id)arg2;
- (id)completions;
- (id)data;
- (id)description;
- (id)device;
- (id)init;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 metadata:(id)arg3 device:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 metadata:(id)arg3 device:(id)arg4 completions:(id)arg5;
- (id)metadata;

@end
