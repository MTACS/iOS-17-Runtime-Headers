
@interface CVABackgroundRequestImplSourceImage : NSObject <CVABackgroundRequest> {
    struct __CVBuffer { } * _sourceColorPixelBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct __CVBuffer { }*sourceColorPixelBuffer;
@property (readonly) Class superclass;

- (void)setSourceColorPixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)sourceColorPixelBuffer;

@end
