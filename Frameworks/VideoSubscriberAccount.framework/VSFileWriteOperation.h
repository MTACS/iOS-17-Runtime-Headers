
@interface VSFileWriteOperation : VSAsyncOperation {
    VSOptional * _data;
    VSOptional * _destination;
    NSError * _error;
}

@property (nonatomic, retain) VSOptional *data;
@property (nonatomic, retain) VSOptional *destination;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)data;
- (id)destination;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (void)setData:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setError:(id)arg1;

@end
