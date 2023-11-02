
@interface FigCaptureCMSession : NSObject {
    struct opaqueCMSession { } * _cmsession;
}

@property (nonatomic, readonly, retain) struct opaqueCMSession { }*cmsession;

- (struct opaqueCMSession { }*)cmsession;
- (id)copyProperty:(struct __CFString { }*)arg1 error:(int*)arg2;
- (void)dealloc;
- (id)initWithCMSession:(struct opaqueCMSession { }*)arg1;
- (int)setProperty:(struct __CFString { }*)arg1 value:(id)arg2;

@end
