
@interface OITSUUIImageAutoreleasePoolGuard : NSObject {
    UIImage * mImage;
}

- (void)dealloc;
- (id)initWithUIImage:(id)arg1;

@end
