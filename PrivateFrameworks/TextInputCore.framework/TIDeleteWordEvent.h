
@interface TIDeleteWordEvent : TIUserAction {
    NSMutableArray * _allKeyboardInputsM;
    NSMutableArray * _allTouchesM;
    NSMutableArray * _candidatesOfferedM;
    NSMutableArray * _touchLayoutsM;
}

@property (nonatomic, readonly) NSArray *allKeyboardInputs;
@property (nonatomic, retain) NSMutableArray *allKeyboardInputsM;
@property (nonatomic, readonly) NSArray *allTouches;
@property (nonatomic, retain) NSMutableArray *allTouchesM;
@property (nonatomic, readonly) NSArray *candidatesOffered;
@property (nonatomic, retain) NSMutableArray *candidatesOfferedM;
@property (nonatomic, readonly) NSArray *touchLayouts;
@property (nonatomic, retain) NSMutableArray *touchLayoutsM;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCandidatesOffered:(id)arg1;
- (void)addKeyInput:(id)arg1;
- (void)addKeyInputs:(id)arg1;
- (void)addTouches:(id)arg1 withLayoutIDs:(id)arg2;
- (id)allKeyboardInputs;
- (id)allKeyboardInputsM;
- (id)allTouches;
- (id)allTouchesM;
- (id)candidatesOffered;
- (id)candidatesOfferedM;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTIKeyboardState:(id)arg1;
- (void)setAllKeyboardInputsM:(id)arg1;
- (void)setAllTouchesM:(id)arg1;
- (void)setCandidatesOfferedM:(id)arg1;
- (void)setTouchLayoutsM:(id)arg1;
- (id)touchLayouts;
- (id)touchLayoutsM;

@end
