
@interface EMEnumProperty : CMProperty {
    int  wdValue;
}

+ (id)mapHorizontalAlignmentValue:(int)arg1;
+ (id)mapUnderlineValue:(int)arg1;
+ (id)mapVerticalAlignmentValue:(int)arg1;

- (id)cssStringForName:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEnum:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapHorizontalAlignment;
- (id)mapUnderline;
- (id)mapVerticalAlignment;
- (int)value;

@end
