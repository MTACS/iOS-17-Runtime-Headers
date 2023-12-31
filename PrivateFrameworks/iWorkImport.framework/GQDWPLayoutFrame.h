
@interface GQDWPLayoutFrame : NSObject {
    GQDWPLayoutStorage * mStorage;
    GQDSStyle * mStyle;
    char * mStyleRef;
    unsigned int  mTextScale;
}

- (void)dealloc;
- (bool)isBlank;
- (id)layoutStyle;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)resolveStyleRef;
- (id)storage;
- (unsigned int)textScale;

@end
