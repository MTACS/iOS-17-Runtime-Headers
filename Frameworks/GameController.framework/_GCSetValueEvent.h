
@interface _GCSetValueEvent : NSObject {
    bool  consumed;
    bool  ignoredByDoublePressRecognizer;
    bool  ignoredByLongPressRecognizer;
    bool  ignoredBySinglePressRecognizer;
    bool  pressed;
    bool  tentativeSinglePress;
    double  timestamp;
}

@end
