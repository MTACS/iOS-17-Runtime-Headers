
@interface TIWordEntryAligned : NSObject <NSSecureCoding> {
    NSArray * _alignedKeyboardInputs;
    NSArray * _alignedTouches;
    NSString * _completeString;
    NSString * _expectedString;
    int  _inSessionAlignmentConfidence;
    bool  _isContinuousPathConversion;
    TIWordEntry * _originalWord;
}

@property (nonatomic, retain) NSArray *alignedKeyboardInputs;
@property (nonatomic, retain) NSArray *alignedTouches;
@property (nonatomic, copy) NSString *completeString;
@property (nonatomic, copy) NSString *expectedString;
@property (nonatomic) int inSessionAlignmentConfidence;
@property (nonatomic) bool isContinuousPathConversion;
@property (nonatomic, retain) TIWordEntry *originalWord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alignedKeyboardInputs;
- (id)alignedTouches;
- (id)completeString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedString;
- (int)inSessionAlignmentConfidence;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isContinuousPathConversion;
- (id)originalWord;
- (void)setAlignedKeyboardInputs:(id)arg1;
- (void)setAlignedTouches:(id)arg1;
- (void)setCompleteString:(id)arg1;
- (void)setExpectedString:(id)arg1;
- (void)setInSessionAlignmentConfidence:(int)arg1;
- (void)setIsContinuousPathConversion:(bool)arg1;
- (void)setOriginalWord:(id)arg1;

@end
