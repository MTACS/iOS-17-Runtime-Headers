
@interface GQDWPBlockList : NSObject {
    struct __CFArray { } * mChildren;
}

- (struct __CFArray { }*)children;
- (void)dealloc;
- (bool)isBlank;

@end
