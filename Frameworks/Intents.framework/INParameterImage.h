
@interface INParameterImage : NSObject <NSCopying> {
    INImage * _image;
    INParameter * _parameter;
}

@property (nonatomic, readonly, copy) INImage *image;
@property (nonatomic, readonly, copy) INParameter *parameter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)image;
- (id)initWithParameter:(id)arg1 image:(id)arg2;
- (id)parameter;

@end
