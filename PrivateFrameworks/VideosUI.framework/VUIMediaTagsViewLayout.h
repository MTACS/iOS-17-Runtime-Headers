
@interface VUIMediaTagsViewLayout : NSObject {
    bool  _alignBadgeVertically;
    UIColor * _backgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _badgeMargin;
    double  _badgeMaxHeight;
    UIColor * _badgeTintColor;
    bool  _centerAlign;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _commonSenseMargin;
    NSString * _compositingFilter;
    bool  _groupActivityTagEnabled;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _groupMargin;
    NSArray * _groupedKeys;
    UIColor * _highContrastBadgeTintColor;
    UIColor * _highlightColor;
    VUITextBadgeLayout * _liveTextBadgeLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    double  _maxWidth;
    bool  _orphanAvoidance;
    VUITextLayout * _rentalExpirationTextLayout;
    NSShadow * _shadow;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textBadgeMargin;
    VUITextLayout * _textLayout;
    VUITextBadgeLayout * _timeTextBadgeLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tomatoMeterMargin;
    unsigned long long  _type;
    bool  _wrappingAllowed;
}

@property (nonatomic) bool alignBadgeVertically;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } badgeMargin;
@property (nonatomic) double badgeMaxHeight;
@property (nonatomic, retain) UIColor *badgeTintColor;
@property (nonatomic) bool centerAlign;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } commonSenseMargin;
@property (nonatomic, retain) NSString *compositingFilter;
@property (getter=isGroupActivityTagEnabled, nonatomic, readonly) bool groupActivityTagEnabled;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } groupMargin;
@property (nonatomic, readonly) NSArray *groupedKeys;
@property (nonatomic, retain) UIColor *highContrastBadgeTintColor;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) VUITextBadgeLayout *liveTextBadgeLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly) bool orphanAvoidance;
@property (nonatomic, readonly) VUITextLayout *rentalExpirationTextLayout;
@property (nonatomic, retain) NSShadow *shadow;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textBadgeMargin;
@property (nonatomic, readonly) VUITextLayout *textLayout;
@property (nonatomic, retain) VUITextBadgeLayout *timeTextBadgeLayout;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tomatoMeterMargin;
@property (nonatomic) unsigned long long type;
@property (getter=isWrappingAllowed, nonatomic, readonly) bool wrappingAllowed;

- (void).cxx_destruct;
- (bool)alignBadgeVertically;
- (id)backgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })badgeMargin;
- (double)badgeMaxHeight;
- (id)badgeTintColor;
- (bool)centerAlign;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })commonSenseMargin;
- (id)compositingFilter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })groupMargin;
- (id)groupedKeys;
- (id)highContrastBadgeTintColor;
- (id)highlightColor;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isGroupActivityTagEnabled;
- (bool)isWrappingAllowed;
- (id)liveTextBadgeLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (double)maxWidth;
- (bool)orphanAvoidance;
- (id)rentalExpirationTextLayout;
- (void)setAlignBadgeVertically:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadgeMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBadgeMaxHeight:(double)arg1;
- (void)setBadgeTintColor:(id)arg1;
- (void)setCenterAlign:(bool)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setGroupMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighContrastBadgeTintColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLiveTextBadgeLayout:(id)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setShadow:(id)arg1;
- (void)setTextBadgeMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTimeTextBadgeLayout:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)shadow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textBadgeMargin;
- (id)textLayout;
- (id)timeTextBadgeLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tomatoMeterMargin;
- (unsigned long long)type;

@end
