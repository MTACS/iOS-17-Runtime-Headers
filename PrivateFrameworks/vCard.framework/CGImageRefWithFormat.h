
@interface CGImageRefWithFormat : NSObject {
    struct CGImage { } * _imageRef;
    struct __CFString { } * _sourceImageFormatUTI;
}

@property (nonatomic, readonly) struct CGImage { }*imageRef;
@property (nonatomic, readonly) struct __CFString { }*sourceImageFormatUTI;

- (struct CGImage { }*)imageRef;
- (id)initWithImage:(struct CGImage { }*)arg1 andFormat:(struct __CFString { }*)arg2;
- (struct __CFString { }*)sourceImageFormatUTI;

@end
