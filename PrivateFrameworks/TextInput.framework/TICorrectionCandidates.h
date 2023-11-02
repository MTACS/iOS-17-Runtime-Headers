
@interface TICorrectionCandidates : NSObject <NSSecureCoding> {
    NSArray * _alternateCorrections;
    TIKeyboardCandidate * _autocorrection;
    bool  _autocorrectionBlocked;
}

@property (nonatomic, readonly) NSArray *alternateCorrections;
@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, readonly) bool autocorrectionBlocked;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateCorrections;
- (id)autocorrection;
- (bool)autocorrectionBlocked;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutocorrection:(id)arg1 alternateCorrections:(id)arg2;
- (id)initWithAutocorrection:(id)arg1 alternateCorrections:(id)arg2 autocorrectionBlocked:(bool)arg3;
- (id)initWithCoder:(id)arg1;

@end
