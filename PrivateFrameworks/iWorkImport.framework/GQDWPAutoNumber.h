
@interface GQDWPAutoNumber : NSObject {
    int  mType;
    struct __CFString { } * mValue;
}

- (void)dealloc;
- (int)type;
- (struct __CFString { }*)value;

@end
