
@interface GQDTNumberCell : GQDTCell {
    GQDTComputedFormatSpec * mComputedFormat;
    double  mValue;
}

- (struct __CFString { }*)createStringValue;
- (void)dealloc;
- (int)readAttributesForNCell:(struct _xmlTextReader { }*)arg1;
- (int)readAttributesForNumberCell:(struct _xmlTextReader { }*)arg1;
- (double)value;

@end
