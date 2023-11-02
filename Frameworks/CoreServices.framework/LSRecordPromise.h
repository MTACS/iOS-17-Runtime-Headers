
@interface LSRecordPromise : NSObject <NSSecureCoding> {
    _LSDatabase * _db;
    NSData * _pi;
}

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fulfillReturningError:(id*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1 error:(id*)arg2;

@end
