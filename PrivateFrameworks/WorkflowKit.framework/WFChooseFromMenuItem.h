
@interface WFChooseFromMenuItem : NSObject <NSSecureCoding> {
    NSString * _string;
    NSString * _subtitle;
    NSArray * _synonyms;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSArray *synonyms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 synonyms:(id)arg2 subtitle:(id)arg3;
- (id)string;
- (id)subtitle;
- (id)synonyms;

@end
