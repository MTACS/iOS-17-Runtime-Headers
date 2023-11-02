
@interface FPImportProgressReport : NSObject <NSSecureCoding> {
    NSArray * _errorDetails;
    long long  _numberOfItemsInError;
    long long  _numberOfItemsReconciled;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSArray *errorDetails;
@property (nonatomic, readonly, copy) NSDictionary *json;
@property (nonatomic, readonly) long long numberOfItemsInError;
@property (nonatomic, readonly) long long numberOfItemsReconciled;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDetails;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 numberOfItemsReconciled:(long long)arg2 numberOfItemsInError:(long long)arg3 errorDetails:(id)arg4;
- (id)json;
- (long long)numberOfItemsInError;
- (long long)numberOfItemsReconciled;
- (long long)status;

@end
