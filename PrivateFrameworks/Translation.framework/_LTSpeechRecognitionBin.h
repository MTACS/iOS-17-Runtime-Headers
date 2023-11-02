
@interface _LTSpeechRecognitionBin : NSObject <NSSecureCoding> {
    NSArray * _alternatives;
    unsigned long long  _bestAlternativeIndex;
}

@property (nonatomic, retain) NSArray *alternatives;
@property (nonatomic) unsigned long long bestAlternativeIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternatives;
- (unsigned long long)bestAlternativeIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setBestAlternativeIndex:(unsigned long long)arg1;

@end
