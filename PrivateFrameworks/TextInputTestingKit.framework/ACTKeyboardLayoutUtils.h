
@interface ACTKeyboardLayoutUtils : NSObject {
    NSMutableDictionary * _keyOverrides;
    NSLocale * _locale;
}

@property (nonatomic, readonly) NSMutableDictionary *keyOverrides;

- (void).cxx_destruct;
- (id)alternativeKeyForString:(id)arg1 keyplane:(id)arg2 preferBaseKeyVariants:(bool)arg3 preferManualShift:(bool)arg4 substituteUpperCaseForLowerCase:(bool)arg5;
- (id)anyKeyForString:(id)arg1 keyplane:(id)arg2 wantSecondaryString:(bool)arg3 isRetyping:(bool)arg4 preferBaseKeyVariants:(bool)arg5 preferManualShift:(bool)arg6 substituteUpperCaseForLowerCase:(bool)arg7;
- (id)baseKeyForString:(id)arg1;
- (id)createTTKPlane:(id)arg1;
- (id)exactKeyForString:(id)arg1 keyplane:(id)arg2;
- (id)exactKeyForString:(id)arg1 keyplane:(id)arg2 includeSecondaryStrings:(bool)arg3;
- (id)initWithLocale:(id)arg1;
- (id)keyOverrides;
- (id)representedStringForKey:(id)arg1 shifted:(bool)arg2;
- (id)representedStringForKey:(id)arg1 shifted:(bool)arg2 includeSecondaryStrings:(bool)arg3;
- (void)setLayoutKeyOverride:(id)arg1 forKey:(id)arg2 uiKeyboardStringNothing:(id)arg3;
- (id)substitutesForKey:(id)arg1 preferBaseKeyVariants:(bool)arg2 preferManualShift:(bool)arg3 substituteUpperCaseForLowerCase:(bool)arg4;

@end
