
@interface GQDWPTocEntry : GQDWPBlockList {
    struct __CFString { } * mBookmark;
}

- (struct __CFString { }*)bookmark;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end
