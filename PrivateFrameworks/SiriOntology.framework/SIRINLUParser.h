
@interface SIRINLUParser : NSObject <NSSecureCoding> {
    int  _algorithmType;
    int  _parserIdentifier;
}

@property (nonatomic) int algorithmType;
@property (nonatomic) int parserIdentifier;

+ (bool)supportsSecureCoding;

- (int)algorithmType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlgorithmType:(int)arg1 parserIdentifier:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (int)parserIdentifier;
- (void)setAlgorithmType:(int)arg1;
- (void)setParserIdentifier:(int)arg1;

@end
