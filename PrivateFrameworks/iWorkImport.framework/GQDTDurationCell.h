
@interface GQDTDurationCell : GQDTCell {
    GQDTComputedFormatSpec * mComputedFormat;
    struct __CFBundle { } * mProcessorBundle;
    double  mValue;
}

- (struct __CFString { }*)createStringValue;
- (void)dealloc;
- (int)readAttributesForDurationCell:(struct _xmlTextReader { }*)arg1;
- (void)setProcessorBundle:(struct __CFBundle { }*)arg1;

@end
