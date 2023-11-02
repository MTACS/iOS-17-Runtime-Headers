
@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell {
    bool  _active;
    NTKComplication * _complication;
    bool  _dateSlot;
    bool  _enabled;
    bool  _isRichSlot;
    NSString * _slot;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) NTKComplication *complication;
@property (nonatomic, readonly) bool dateSlot;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) bool isRichSlot;
@property (nonatomic, readonly) NSString *slot;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_activeColor;
- (id)_disabledColor;
- (id)_inactiveColor;
- (id)_traitCollectionAdjustedIfNeeded;
- (void)_updateDetailText;
- (void)_updateLabelFonts;
- (void)_updateState;
- (bool)active;
- (id)complication;
- (bool)dateSlot;
- (bool)enabled;
- (id)initWithSlot:(id)arg1 dateSlot:(bool)arg2 isRichSlot:(bool)arg3 inFace:(id)arg4;
- (bool)isRichSlot;
- (double)rowHeight;
- (void)setActive:(bool)arg1;
- (void)setComplication:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (id)slot;

@end
