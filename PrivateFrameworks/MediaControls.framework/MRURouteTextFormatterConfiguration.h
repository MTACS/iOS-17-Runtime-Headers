
@interface MRURouteTextFormatterConfiguration : NSObject {
    bool  _allowsMultitruncation;
    bool  _displayAsSiriSuggestion;
    UIFont * _font;
    bool  _forcesUppercaseText;
    long long  _minimumEndCharacterCount;
    bool  _omitGroupLeaderName;
    double  _textBoundingWidth;
    long long  _truncationMode;
}

@property (nonatomic) bool allowsMultitruncation;
@property (nonatomic) bool displayAsSiriSuggestion;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool forcesUppercaseText;
@property (nonatomic) long long minimumEndCharacterCount;
@property (nonatomic) bool omitGroupLeaderName;
@property (nonatomic) double textBoundingWidth;
@property (nonatomic) long long truncationMode;

- (void).cxx_destruct;
- (bool)allowsMultitruncation;
- (bool)displayAsSiriSuggestion;
- (id)font;
- (bool)forcesUppercaseText;
- (id)init;
- (long long)minimumEndCharacterCount;
- (bool)omitGroupLeaderName;
- (void)setAllowsMultitruncation:(bool)arg1;
- (void)setDisplayAsSiriSuggestion:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setForcesUppercaseText:(bool)arg1;
- (void)setMinimumEndCharacterCount:(long long)arg1;
- (void)setOmitGroupLeaderName:(bool)arg1;
- (void)setTextBoundingWidth:(double)arg1;
- (void)setTruncationMode:(long long)arg1;
- (double)textBoundingWidth;
- (long long)truncationMode;

@end
