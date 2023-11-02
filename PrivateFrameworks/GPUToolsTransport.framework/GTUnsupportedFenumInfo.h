
@interface GTUnsupportedFenumInfo : NSObject <NSSecureCoding> {
    NSString * _category;
    NSString * _customMessage;
    NSString * _fenum;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *customMessage;
@property (nonatomic, readonly) NSString *fenum;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)customMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)fenum;
- (id)initWithCoder:(id)arg1;
- (id)initWithFenum:(id)arg1 category:(id)arg2 customMessage:(id)arg3;
- (id)reason;

@end
