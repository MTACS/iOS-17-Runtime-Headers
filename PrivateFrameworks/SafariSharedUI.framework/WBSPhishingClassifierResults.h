
@interface WBSPhishingClassifierResults : NSObject {
    unsigned long long  _classification;
    float  _confidence;
    NSString * _identifier;
    UIImage * _image;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long classification;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (unsigned long long)classification;
- (float)confidence;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)image;
- (id)initWithURL:(id)arg1 image:(id)arg2 classification:(unsigned long long)arg3 identifier:(id)arg4 confidence:(float)arg5;
- (id)url;

@end
