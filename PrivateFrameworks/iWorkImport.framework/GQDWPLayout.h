
@interface GQDWPLayout : GQDWPBlockList {
    GQDSStyle * mLayoutStyle;
}

- (void)dealloc;
- (id)layoutStyle;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end
