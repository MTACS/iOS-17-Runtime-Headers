
@interface TIKeyboardInput : NSObject <NSSecureCoding> {
    TIKeyboardCandidate * _acceptedCandidate;
    bool  _backspace;
    union { 
        long long integerValue; 
        struct { 
            unsigned int uppercase : 1; 
            unsigned int autoshifted : 1; 
            unsigned int popupVariant : 1; 
            unsigned int multitap : 1; 
            unsigned int flick : 1; 
            unsigned int gesture : 1; 
            unsigned int synthesizedByAcceptingCandidate : 1; 
            unsigned int doubleSpace : 1; 
            unsigned int rapidDelete : 1; 
            unsigned int shiftDown : 1; 
            unsigned int expandSegment : 1; 
            unsigned int shrinkSegment : 1; 
        } fields; 
    }  _flags;
    TIHandwritingStrokes * _handwritingStrokes;
    NSString * _inputManagerHint;
    TIKeyboardOutput * _output;
    NSString * _string;
    double  _timestamp;
    TIKeyboardTouchEvent * _touchEvent;
    long long  _transliterationType;
}

@property (nonatomic, retain) TIKeyboardCandidate *acceptedCandidate;
@property (getter=isAutoshifted, nonatomic) bool autoshifted;
@property (getter=isBackspace, nonatomic) bool backspace;
@property (getter=isDoubleSpace, nonatomic) bool doubleSpace;
@property (getter=isExpandSegment, nonatomic) bool expandSegment;
@property (getter=isFlick, nonatomic) bool flick;
@property (getter=isGesture, nonatomic) bool gesture;
@property (nonatomic, copy) TIHandwritingStrokes *handwritingStrokes;
@property (nonatomic, copy) NSString *inputManagerHint;
@property (getter=isMultitap, nonatomic) bool multitap;
@property (nonatomic, copy) <NSCopying><NSObject><NSSecureCoding> *object;
@property (nonatomic, retain) TIKeyboardOutput *output;
@property (getter=isPopupVariant, nonatomic) bool popupVariant;
@property (getter=isRapidDelete, nonatomic) bool rapidDelete;
@property (getter=isShiftDown, nonatomic) bool shiftDown;
@property (getter=isShrinkSegment, nonatomic) bool shrinkSegment;
@property (nonatomic, copy) NSString *string;
@property (getter=isSynthesizedByAcceptingCandidate, nonatomic) bool synthesizedByAcceptingCandidate;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) TIKeyboardTouchEvent *touchEvent;
@property (nonatomic) long long transliterationType;
@property (getter=isUppercase, nonatomic) bool uppercase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptedCandidate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handwritingStrokes;
- (id)initWithCoder:(id)arg1;
- (id)inputManagerHint;
- (bool)isAutoshifted;
- (bool)isBackspace;
- (bool)isDoubleSpace;
- (bool)isExpandSegment;
- (bool)isFlick;
- (bool)isGesture;
- (bool)isMultitap;
- (bool)isPopupVariant;
- (bool)isRapidDelete;
- (bool)isShiftDown;
- (bool)isShrinkSegment;
- (bool)isSynthesizedByAcceptingCandidate;
- (bool)isUppercase;
- (id)object;
- (id)output;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setAutoshifted:(bool)arg1;
- (void)setBackspace:(bool)arg1;
- (void)setDoubleSpace:(bool)arg1;
- (void)setExpandSegment:(bool)arg1;
- (void)setFlick:(bool)arg1;
- (void)setGesture:(bool)arg1;
- (void)setHandwritingStrokes:(id)arg1;
- (void)setInputManagerHint:(id)arg1;
- (void)setMultitap:(bool)arg1;
- (void)setObject:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setPopupVariant:(bool)arg1;
- (void)setRapidDelete:(bool)arg1;
- (void)setShiftDown:(bool)arg1;
- (void)setShrinkSegment:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setSynthesizedByAcceptingCandidate:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTouchEvent:(id)arg1;
- (void)setTransliterationType:(long long)arg1;
- (void)setUppercase:(bool)arg1;
- (id)string;
- (double)timestamp;
- (id)touchEvent;
- (long long)transliterationType;

@end
