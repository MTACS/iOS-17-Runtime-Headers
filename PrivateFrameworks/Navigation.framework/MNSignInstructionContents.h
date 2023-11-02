
@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents> {
    NSArray * _maneuverFormats;
    NSArray * _normalInstructionStrings;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) bool hasServerContent;
@property (nonatomic, retain) NSArray *maneuverFormats;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic) bool suppressFallback;
@property (nonatomic) bool suppressNames;

+ (id)contentsWithStep:(id)arg1 destination:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_distanceFormatOptions;
- (id)_evaluatedStringsForInstructionStrings:(id)arg1;
- (id)_instructionsForFormats:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (long long)context;
- (id)description;
- (bool)hasServerContent;
- (id)instructionWithShorterAlternatives;
- (id)maneuverFormats;
- (void)setManeuverFormats:(id)arg1;

@end
