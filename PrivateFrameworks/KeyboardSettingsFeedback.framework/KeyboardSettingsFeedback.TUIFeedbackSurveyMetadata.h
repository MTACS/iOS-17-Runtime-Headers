
@interface KeyboardSettingsFeedback.TUIFeedbackSurveyMetadata : NSObject {
    void build;
    void finalInputModes;
    void finalPreferenceValue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  finalTimestamp;
    void initialInputModes;
    void initialPreferenceValue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  initialTimestamp;
    void language;
    void model;
    void region;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBuild:(id)arg1 model:(id)arg2 language:(id)arg3 region:(id)arg4 initialPreferenceValue:(bool)arg5 initialInputModes:(id)arg6 initialTimestamp:(id)arg7 finalPreferenceValue:(bool)arg8 finalInputModes:(id)arg9 finalTimestamp:(id)arg10;

@end
