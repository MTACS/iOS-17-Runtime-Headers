
@interface _CPLEngineSyncLastError : NSObject {
    NSDate * _date;
    NSError * _error;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)date;
- (id)error;
- (void)setDate:(id)arg1;
- (void)setError:(id)arg1;

@end
