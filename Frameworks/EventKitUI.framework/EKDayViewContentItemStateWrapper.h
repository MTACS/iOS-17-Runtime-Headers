
@interface EKDayViewContentItemStateWrapper : NSObject <CUIKOROccurrenceState> {
    EKDayViewContent * _content;
    EKDayViewContentItem * _item;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } backgroundRect;
@property (nonatomic, readonly) long long birthdayCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) bool isDimmed;
@property (nonatomic, readonly) bool isProposedTime;
@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, readonly) bool isVibrant;
@property (nonatomic, readonly) EKEvent *occurrence;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topYBoundaryForText;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) double travelTime;
@property (nonatomic, readonly) double travelTimeHeight;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) bool usesSmallText;
@property (nonatomic, readonly) double visibleHeight;

+ (id)wrapperWithContentItem:(id)arg1 viewContent:(id)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRect;
- (long long)birthdayCount;
- (long long)horizontalSizeClass;
- (id)initWithContentItem:(id)arg1 viewContent:(id)arg2;
- (bool)isDimmed;
- (bool)isProposedTime;
- (bool)isSelected;
- (bool)isVibrant;
- (id)occurrence;
- (double)topYBoundaryForText;
- (id)traitCollection;
- (double)travelTime;
- (double)travelTimeHeight;
- (long long)userInterfaceStyle;
- (bool)usesSmallText;
- (double)visibleHeight;

@end
