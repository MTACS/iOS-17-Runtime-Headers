
@interface AFVoiceCommandGrammarParsePackage : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _nBestParses;
    NSArray * _preITNNBestParses;
}

@property (nonatomic, readonly, copy) NSArray *nBestParses;
@property (nonatomic, readonly, copy) NSArray *preITNNBestParses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNBestParses:(id)arg1 preITNNBestParses:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)nBestParses;
- (id)preITNNBestParses;

@end
