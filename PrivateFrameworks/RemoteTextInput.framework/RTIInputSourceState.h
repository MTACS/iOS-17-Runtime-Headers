
@interface RTIInputSourceState : NSObject <NSSecureCoding> {
    NSString * _inputMode;
    union { 
        int integerValue; 
        struct { 
            unsigned int minimized : 1; 
            unsigned int hardwareKeyboardMode : 1; 
            unsigned int centerFilled : 1; 
            unsigned int split : 1; 
            unsigned int floating : 1; 
            unsigned int showingEmojiSearch : 1; 
            unsigned int showsCandidateBar : 1; 
            unsigned int usesCandidateSelection : 1; 
            unsigned int supportsSetPhraseBoundary : 1; 
        } fields; 
    }  _inputSourceStateMask;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _leftSplitFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rightSplitFrame;
}

@property (nonatomic) bool centerFilled;
@property (nonatomic) bool floating;
@property (nonatomic) bool hardwareKeyboardMode;
@property (nonatomic, retain) NSString *inputMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftSplitFrame;
@property (nonatomic) bool minimized;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rightSplitFrame;
@property (nonatomic) bool showingEmojiSearch;
@property (nonatomic) bool showsCandidateBar;
@property (nonatomic) bool split;
@property (nonatomic) bool supportsSetPhraseBoundary;
@property (nonatomic) bool usesCandidateSelection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)centerFilled;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)floating;
- (bool)hardwareKeyboardMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inputMode;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftSplitFrame;
- (bool)minimized;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightSplitFrame;
- (void)setCenterFilled:(bool)arg1;
- (void)setFloating:(bool)arg1;
- (void)setHardwareKeyboardMode:(bool)arg1;
- (void)setInputMode:(id)arg1;
- (void)setLeftSplitFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMinimized:(bool)arg1;
- (void)setRightSplitFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowingEmojiSearch:(bool)arg1;
- (void)setShowsCandidateBar:(bool)arg1;
- (void)setSplit:(bool)arg1;
- (void)setSupportsSetPhraseBoundary:(bool)arg1;
- (void)setUsesCandidateSelection:(bool)arg1;
- (bool)showingEmojiSearch;
- (bool)showsCandidateBar;
- (bool)split;
- (bool)supportsSetPhraseBoundary;
- (bool)usesCandidateSelection;

@end
