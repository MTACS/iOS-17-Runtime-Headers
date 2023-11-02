
@interface EMListUnsubscribePostValues : NSObject <NSSecureCoding> {
    NSURL * _oneClickURL;
    NSString * _postContent;
}

@property (nonatomic, readonly) NSURL *oneClickURL;
@property (nonatomic, readonly) NSString *postContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 postContent:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)oneClickURL;
- (id)postContent;

@end
