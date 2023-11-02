
@interface OSLogEntry : NSObject <NSSecureCoding> {
    NSString * _composedMessage;
    NSDate * _date;
    long long  _storeCategory;
}

@property (nonatomic, readonly) NSString *composedMessage;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long storeCategory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)composedMessage;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 composedMessage:(id)arg2;
- (id)initWithEventProxy:(id)arg1;
- (long long)storeCategory;

@end
