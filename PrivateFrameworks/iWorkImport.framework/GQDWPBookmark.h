
@interface GQDWPBookmark : GQDWPInlineList {
    bool  mHidden;
    struct __CFString { } * mName;
    bool  mRanged;
}

- (void)dealloc;
- (bool)isHidden;
- (bool)isRanged;
- (struct __CFString { }*)name;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end
