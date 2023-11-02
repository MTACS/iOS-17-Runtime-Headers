
@interface ASTAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _action;
    bool  _finished;
    bool  _generatedId;
    NSString * _identifier;
    NSDictionary * _parameters;
    unsigned long long  _progress;
    long long  _resultCode;
    NSDictionary * _results;
}

@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic) bool generatedId;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic) unsigned long long progress;
@property (nonatomic) long long resultCode;
@property (nonatomic, retain) NSDictionary *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptableDecoderClasses;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (bool)generatedId;
- (id)identifier;
- (id)init;
- (id)initWithAction:(id)arg1 data:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isFinished;
- (id)parameters;
- (unsigned long long)progress;
- (long long)resultCode;
- (id)results;
- (void)setFinished:(bool)arg1;
- (void)setGeneratedId:(bool)arg1;
- (void)setProgress:(unsigned long long)arg1;
- (void)setResultCode:(long long)arg1;
- (void)setResults:(id)arg1;

@end
