
@interface EARSpeechRecognition : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _interpretationIndices;
    NSArray * _nBest;
    NSArray * _oneBest;
    NSArray * _tokenSausage;
}

@property (nonatomic, readonly, copy) NSArray *interpretationIndices;
@property (nonatomic, readonly, copy) NSArray *nBest;
@property (nonatomic, readonly, copy) NSArray *oneBest;
@property (nonatomic, readonly, copy) NSArray *tokenSausage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognition:(id)arg1;
- (id)interpretationIndices;
- (id)nBest;
- (id)oneBest;
- (id)tokenSausage;

@end
