
@interface GQDWPSection : NSObject {
    struct __CFArray { } * mChildren;
    GQDSStyle * mStyle;
}

- (struct __CFArray { }*)children;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (id)style;

@end
