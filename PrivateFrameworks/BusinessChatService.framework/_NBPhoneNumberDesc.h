
@interface _NBPhoneNumberDesc : NSObject {
    NSString * _exampleNumber;
    NSData * _nationalNumberMatcherData;
    NSString * _nationalNumberPattern;
    NSArray * _possibleLength;
    NSArray * _possibleLengthLocalOnly;
    NSData * _possibleNumberMatcherData;
    NSString * _possibleNumberPattern;
}

@property (nonatomic, readonly) NSString *exampleNumber;
@property (nonatomic, readonly) NSData *nationalNumberMatcherData;
@property (nonatomic, readonly) NSString *nationalNumberPattern;
@property (nonatomic, readonly) NSArray *possibleLength;
@property (nonatomic, readonly) NSArray *possibleLengthLocalOnly;
@property (nonatomic, readonly) NSData *possibleNumberMatcherData;
@property (nonatomic, readonly) NSString *possibleNumberPattern;

- (void).cxx_destruct;
- (id)description;
- (id)exampleNumber;
- (id)initWithEntry:(id)arg1;
- (id)nationalNumberMatcherData;
- (id)nationalNumberPattern;
- (id)possibleLength;
- (id)possibleLengthLocalOnly;
- (id)possibleNumberMatcherData;
- (id)possibleNumberPattern;

@end
