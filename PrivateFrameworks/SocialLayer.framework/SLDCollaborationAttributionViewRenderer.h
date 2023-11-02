
@interface SLDCollaborationAttributionViewRenderer : NSObject {
    bool  _RTL;
    SLCollaborationAttributionViewMetricsProvider * _metricsProvider;
    UISSlotStyle * _slotStyle;
    SLDCollaborationAttributionViewSlotTag * _slotTag;
}

@property (getter=isRTL, nonatomic) bool RTL;
@property (nonatomic, retain) SLCollaborationAttributionViewMetricsProvider *metricsProvider;
@property (nonatomic, retain) UISSlotStyle *slotStyle;
@property (nonatomic, retain) SLDCollaborationAttributionViewSlotTag *slotTag;

+ (id)accessibilityLabelForTag:(id)arg1;
+ (id)collaboratorsStringForTag:(id)arg1 prefixingWith:(bool)arg2;

- (void).cxx_destruct;
- (id)collaboratorsString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawAvatarWithImageRef:(struct CGImage { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawGenericGlyphInContext:(struct CGContext { }*)arg1;
- (void)drawLine:(struct __CTLine { }*)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3;
- (double)heightForLine:(struct __CTLine { }*)arg1 withOptions:(unsigned long long)arg2;
- (id)initWithStyle:(id)arg1 tag:(id)arg2;
- (bool)isRTL;
- (id)metricsProvider;
- (struct CGImage { }*)newAvatarImage;
- (struct CGImage { }*)newAvatarImageForConversationDrawingMetadata:(id)arg1 allowSnowglobe:(bool)arg2 allowMonogram:(bool)arg3;
- (struct CGImage { }*)newAvatarImageForRecipientDrawingMetadata:(id)arg1 allowMonogram:(bool)arg2;
- (struct CGImage { }*)newGroupPhotoImageFromFileURL:(id)arg1;
- (struct CGImage { }*)newImageFromData:(id)arg1;
- (struct CGImage { }*)newMonogramImageForContact:(id)arg1;
- (struct CGImage { }*)newSnowglobeImageWithCGImages:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setMetricsProvider:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSlotStyle:(id)arg1;
- (void)setSlotTag:(id)arg1;
- (bool)shouldShowGenericIconIfApplicableForVariant:(long long)arg1;
- (bool)shouldShowLabels;
- (bool)shouldShowMonogramIfApplicableForVariant:(long long)arg1;
- (bool)shouldShowSnowglobeIfApplicableForVariant:(long long)arg1;
- (bool)shouldShowSubtitle;
- (id)slotStyle;
- (id)slotTag;
- (id)withCollaboratorsString;

@end
