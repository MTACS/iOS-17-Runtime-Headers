
@interface GQDWPTextList : NSObject {
    struct __CFArray { } * mChildren;
}

- (struct __CFArray { }*)children;
- (void)dealloc;
- (bool)isBlank;
- (void)setChildren:(struct __CFArray { }*)arg1;

@end
