
@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText {
    bool  _businessHoursResolved;
    bool  _distanceResolved;
    UIColor * _hoursColor;
    NSString * _hoursString;
}

@property (getter=isBusinessHoursResolved) bool businessHoursResolved;
@property (getter=isDistanceResolved) bool distanceResolved;
@property (retain) UIColor *hoursColor;
@property (retain) NSString *hoursString;

- (void).cxx_destruct;
- (id)hoursColor;
- (id)hoursString;
- (bool)isBusinessHoursResolved;
- (bool)isDistanceResolved;
- (bool)isRichTextResolved;
- (void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2;
- (void)resolveDistanceNotFound;
- (void)resolveDistanceString:(id)arg1 lines:(id)arg2;
- (void)setBusinessHoursResolved:(bool)arg1;
- (void)setDistanceResolved:(bool)arg1;
- (void)setHoursColor:(id)arg1;
- (void)setHoursString:(id)arg1;
- (void)updateFormattedTextForLines:(id)arg1;

@end
