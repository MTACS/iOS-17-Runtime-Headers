
@interface FPImportItemError : NSObject <NSSecureCoding> {
    NSError * _error;
    NSString * _itemIdentifier;
    long long  _retryCount;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) long long retryCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 error:(id)arg2 retryCount:(long long)arg3;
- (id)itemIdentifier;
- (id)json;
- (long long)retryCount;

@end
