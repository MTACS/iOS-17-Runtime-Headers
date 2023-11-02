
@interface AXAuditContrastResult : NSObject {
    long long  _classification;
    double  _fontSize;
    NSString * _primaryColor;
    double  _ratio;
    NSString * _secondaryColor;
    NSString * _textColor;
}

@property (nonatomic) long long classification;
@property (nonatomic, readonly) NSArray *compareColors;
@property (nonatomic) double fontSize;
@property (nonatomic, copy) NSString *primaryColor;
@property (nonatomic) double ratio;
@property (nonatomic, copy) NSString *secondaryColor;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, copy) NSString *textColor;

- (void).cxx_destruct;
- (long long)classification;
- (id)compareColors;
- (id)description;
- (double)fontSize;
- (id)init;
- (id)primaryColor;
- (double)ratio;
- (id)secondaryColor;
- (void)setClassification:(long long)arg1;
- (void)setFontSize:(double)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setRatio:(double)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)summary;
- (id)textColor;

@end
