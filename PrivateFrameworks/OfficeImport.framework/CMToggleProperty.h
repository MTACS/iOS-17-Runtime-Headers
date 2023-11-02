
@interface CMToggleProperty : CMProperty {
    int  wdValue;
}

- (int)compareValue:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)initWithCMTogglePropertyValue:(int)arg1;
- (id)mapBold;
- (id)mapItalic;
- (id)mapStrikeTrough;
- (void)resolveWithBaseProperty:(id)arg1;
- (int)value;

@end
