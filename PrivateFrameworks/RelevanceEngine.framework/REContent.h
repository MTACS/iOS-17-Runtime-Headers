
@interface REContent : NSObject <NSCopying, NSSecureCoding, _REContentLoggingProperties> {
    NSMutableDictionary * _contents;
    NSTimeZone * _timeZone;
}

@property (nonatomic, copy) UIImage *bodyImage;
@property (nonatomic, retain) NSString *bodyImageCompositingFilter;
@property (nonatomic, copy) REImageContentProvider *bodyImageContentProvider;
@property (nonatomic, copy) CLKImageProvider *bodyImageProvider;
@property (nonatomic) bool bodyImageShouldStretch;
@property (nonatomic, copy) CLKComplicationTemplate *circularTempate;
@property (nonatomic) unsigned long long description1FontStyle;
@property (nonatomic, copy) NSNumber *description1Opacity;
@property (nonatomic, copy) NSAttributedString *description1Text;
@property (nonatomic, copy) RETextContentProvider *description1TextContentProvider;
@property (nonatomic, copy) CLKTextProvider *description1TextProvider;
@property (nonatomic) unsigned long long description2FontStyle;
@property (nonatomic, copy) NSAttributedString *description2Text;
@property (nonatomic, copy) RETextContentProvider *description2TextContentProvider;
@property (nonatomic, copy) CLKTextProvider *description2TextProvider;
@property (nonatomic, copy) NSAttributedString *description3Text;
@property (nonatomic, copy) RETextContentProvider *description3TextContentProvider;
@property (nonatomic, copy) CLKTextProvider *description3TextProvider;
@property (nonatomic, copy) REAccessoryDescription *descriptionAccessory;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic) unsigned long long headerFontStyle;
@property (nonatomic, copy) UIImage *headerImage;
@property (nonatomic, copy) REImageContentProvider *headerImageContentProvider;
@property (nonatomic) unsigned int headerImageEdge;
@property (nonatomic, copy) CLKImageProvider *headerImageProvider;
@property (nonatomic, copy) NSAttributedString *headerText;
@property (nonatomic, copy) RETextContentProvider *headerTextContentProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;
@property (nonatomic, copy) REAccessoryImage *imageAccessory;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFocusRect;
@property (nonatomic, readonly) NSDictionary *loggingContentValues;
@property (nonatomic, copy) REAccessoryMatchup *matchupAccessory;
@property (nonatomic, retain) UIImage *overrideBodyImage;
@property (nonatomic, copy) NSString *overrideBodyString;
@property (nonatomic, retain) UIImage *overrideHeaderImage;
@property (nonatomic) unsigned long long punchThrough;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) CLKImageProvider *summaryImageProvider;
@property (nonatomic, copy) CLKTextProvider *summaryTextProvider;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic) bool tintColorAffectsHeader;
@property (nonatomic) bool useMonospaceFont;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bodyImage;
- (id)bodyImageCompositingFilter;
- (id)bodyImageContentProvider;
- (id)bodyImageProvider;
- (bool)bodyImageShouldStretch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)description1FontStyle;
- (id)description1Opacity;
- (id)description1Text;
- (id)description1TextContentProvider;
- (id)description1TextProvider;
- (unsigned long long)description2FontStyle;
- (id)description2Text;
- (id)description2TextContentProvider;
- (id)description2TextProvider;
- (id)description3Text;
- (id)description3TextContentProvider;
- (id)description3TextProvider;
- (id)descriptionAccessory;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)headerFontStyle;
- (id)headerImage;
- (id)headerImageContentProvider;
- (unsigned int)headerImageEdge;
- (id)headerImageProvider;
- (id)headerText;
- (id)headerTextContentProvider;
- (id)headerTextProvider;
- (id)imageAccessory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFocusRect;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)loggingContentValues;
- (id)matchupAccessory;
- (id)objectForKey:(id)arg1;
- (id)overrideBodyImage;
- (id)overrideBodyString;
- (id)overrideHeaderImage;
- (unsigned long long)punchThrough;
- (void)setBodyImage:(id)arg1;
- (void)setBodyImageCompositingFilter:(id)arg1;
- (void)setBodyImageContentProvider:(id)arg1;
- (void)setBodyImageProvider:(id)arg1;
- (void)setBodyImageShouldStretch:(bool)arg1;
- (void)setDescription1FontStyle:(unsigned long long)arg1;
- (void)setDescription1Opacity:(id)arg1;
- (void)setDescription1Text:(id)arg1;
- (void)setDescription1TextContentProvider:(id)arg1;
- (void)setDescription1TextProvider:(id)arg1;
- (void)setDescription2FontStyle:(unsigned long long)arg1;
- (void)setDescription2Text:(id)arg1;
- (void)setDescription2TextContentProvider:(id)arg1;
- (void)setDescription2TextProvider:(id)arg1;
- (void)setDescription3Text:(id)arg1;
- (void)setDescription3TextContentProvider:(id)arg1;
- (void)setDescription3TextProvider:(id)arg1;
- (void)setDescriptionAccessory:(id)arg1;
- (void)setHeaderFontStyle:(unsigned long long)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHeaderImageContentProvider:(id)arg1;
- (void)setHeaderImageEdge:(unsigned int)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextContentProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (void)setImageAccessory:(id)arg1;
- (void)setImageFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMatchupAccessory:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOverrideBodyImage:(id)arg1;
- (void)setOverrideBodyString:(id)arg1;
- (void)setOverrideHeaderImage:(id)arg1;
- (void)setPunchThrough:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColorAffectsHeader:(bool)arg1;
- (void)setUseMonospaceFont:(bool)arg1;
- (unsigned long long)style;
- (id)tintColor;
- (bool)tintColorAffectsHeader;
- (bool)useMonospaceFont;

// Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI

- (id)circularTempate;
- (id)gaugeProvider;
- (void)setCircularTempate:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (void)setSummaryImageProvider:(id)arg1;
- (void)setSummaryTextProvider:(id)arg1;
- (id)summaryImageProvider;
- (id)summaryTextProvider;

@end
