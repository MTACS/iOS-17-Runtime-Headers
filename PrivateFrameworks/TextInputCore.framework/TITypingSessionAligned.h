
@interface TITypingSessionAligned : NSObject <NSSecureCoding> {
    NSArray * _alignedEntries;
    NSString * _alignedText;
    NSString * _completeText;
    bool  _containsCPEntries;
    unsigned long long  _firstCPEntryIndex;
    NSString * _highConfAlignedSubSegment;
    NSArray * _layouts;
    NSLocale * _locale;
    bool  _success;
}

@property (nonatomic, retain) NSArray *alignedEntries;
@property (nonatomic, retain) NSString *alignedText;
@property (nonatomic, readonly) NSString *completeText;
@property (nonatomic) bool containsCPEntries;
@property (nonatomic) unsigned long long firstCPEntryIndex;
@property (nonatomic, retain) NSString *highConfAlignedSubSegment;
@property (nonatomic, readonly) NSArray *layouts;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic) bool success;

+ (id)alignedEntryForWord:(id)arg1;
+ (id)alignedPathTouchesForWord:(id)arg1;
+ (id)completeStringFromWordEntry:(id)arg1 leadingInputs:(id)arg2 trailingInputs:(id)arg3 followsContinuousPath:(bool)arg4;
+ (id)resolveBackspacesInKeyboardInputs:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alignedEntries;
- (id)alignedText;
- (bool)compareForConfidenceContextA:(id)arg1 contextB:(id)arg2;
- (id)completeText;
- (void)computeAlignedWordsFromSession:(id)arg1;
- (bool)containsCPEntries;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)firstCPEntryIndex;
- (void)getAlignedTextAndConfidence;
- (id)highConfAlignedSubSegment;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)isNewLineScenarioWithCurrentWord:(id)arg1 andPreviousWord:(id)arg2;
- (id)layouts;
- (id)locale;
- (id)restrictedAlignedSessionWithWordLimit:(unsigned long long)arg1;
- (void)setAlignedEntries:(id)arg1;
- (void)setAlignedText:(id)arg1;
- (void)setContainsCPEntries:(bool)arg1;
- (void)setFirstCPEntryIndex:(unsigned long long)arg1;
- (void)setHighConfAlignedSubSegment:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (id)textToAppendForEntry:(id)arg1 sessionIndx:(unsigned long long)arg2;

@end
