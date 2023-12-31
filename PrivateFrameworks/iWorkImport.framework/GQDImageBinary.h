
@interface GQDImageBinary : NSObject {
    struct __CFURL { } * mAbsoluteUrl;
    struct __CFString { } * mPath;
    int  mResourceType;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
}

- (struct __CFURL { }*)createAbsoluteUrlForState:(id)arg1;
- (void)dealloc;
- (int)readDataAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (struct __CFString { }*)relativePath;
- (int)resourceType;
- (struct CGSize { double x1; double x2; })size;

@end
