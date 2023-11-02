
@interface VSAMSBagLoadOperation : VSAsyncOperation {
    NSString * _bagKey;
    NSError * _error;
    id  _value;
}

@property (nonatomic, copy) NSString *bagKey;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)bagKey;
- (id)error;
- (void)executionDidBegin;
- (void)setBagKey:(id)arg1;
- (void)setError:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
