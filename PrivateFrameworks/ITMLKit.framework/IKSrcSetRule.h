
@interface IKSrcSetRule : NSObject {
    NSString * _descriptor;
    NSURL * _imageURL;
    IKStyleMediaQuery * _mediaQuery;
}

@property (nonatomic, retain) NSString *descriptor;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, retain) IKStyleMediaQuery *mediaQuery;

- (void).cxx_destruct;
- (void)_parseDescriptor:(id)arg1;
- (void)_parseMediaQueryDescriptor:(id)arg1;
- (void)_parseResolutionDescriptor:(id)arg1;
- (id)descriptor;
- (id)imageURL;
- (id)initWithURL:(id)arg1 descriptor:(id)arg2;
- (id)mediaQuery;
- (void)setDescriptor:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setMediaQuery:(id)arg1;

@end
