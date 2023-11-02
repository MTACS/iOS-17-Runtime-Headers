
@interface NUTitleViewUpdate : NSObject {
    NSString * _accessibilityTitle;
    bool  _cancelPendingUpdates;
    double  _lingerTimeInterval;
    bool  _speakAccessibilityTitleWhenDisplayed;
    unsigned long long  _styleType;
    long long  _textAlignment;
    id  _value;
    unsigned long long  _valueType;
}

@property (nonatomic, copy) NSString *accessibilityTitle;
@property (getter=shouldCancelPendingUpdates, nonatomic) bool cancelPendingUpdates;
@property (nonatomic) double lingerTimeInterval;
@property (getter=shouldSpeakAccessibilityTitleWhenDisplayed, nonatomic) bool speakAccessibilityTitleWhenDisplayed;
@property (nonatomic, readonly) unsigned long long styleType;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) unsigned long long valueType;

- (void).cxx_destruct;
- (id)accessibilityTitle;
- (id)init;
- (id)initWithAttributedText:(id)arg1 styleType:(unsigned long long)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithText:(id)arg1 styleType:(unsigned long long)arg2;
- (id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 glyph:(id)arg3;
- (id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 styleType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (double)lingerTimeInterval;
- (void)setAccessibilityTitle:(id)arg1;
- (void)setCancelPendingUpdates:(bool)arg1;
- (void)setLingerTimeInterval:(double)arg1;
- (void)setSpeakAccessibilityTitleWhenDisplayed:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (bool)shouldCancelPendingUpdates;
- (bool)shouldSpeakAccessibilityTitleWhenDisplayed;
- (unsigned long long)styleType;
- (long long)textAlignment;
- (id)value;
- (unsigned long long)valueType;

@end
