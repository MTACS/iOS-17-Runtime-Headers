
@interface GQDWPLink : GQDWPInlineList {
    GQDSStyle * mCharStyle;
    struct __CFString { } * mHref;
}

- (id)characterStyle;
- (void)dealloc;
- (struct __CFString { }*)href;
- (int)readStyleFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end
