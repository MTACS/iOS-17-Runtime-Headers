
@interface _UICalendarDateViewCellState : NSObject {
    bool  _forceEmphasizedFont;
    bool  _highlighted;
    bool  _highlightsToday;
    bool  _outOfRange;
    bool  _overhangMonth;
    bool  _selected;
    bool  _today;
    UITraitCollection * _traits;
}

@property (nonatomic) bool forceEmphasizedFont;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool highlightsToday;
@property (getter=isOutOfRange, nonatomic) bool outOfRange;
@property (getter=isOverhangMonth, nonatomic) bool overhangMonth;
@property (getter=isSelected, nonatomic) bool selected;
@property (getter=isToday, nonatomic) bool today;
@property (nonatomic, readonly) UITraitCollection *traits;

- (void).cxx_destruct;
- (bool)forceEmphasizedFont;
- (unsigned long long)hash;
- (bool)highlightsToday;
- (id)initWithTraits:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighlighted;
- (bool)isOutOfRange;
- (bool)isOverhangMonth;
- (bool)isSelected;
- (bool)isToday;
- (void)setForceEmphasizedFont:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightsToday:(bool)arg1;
- (void)setOutOfRange:(bool)arg1;
- (void)setOverhangMonth:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setToday:(bool)arg1;
- (id)traits;

@end
