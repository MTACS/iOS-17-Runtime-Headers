
@interface VisionCoreE5RTModelSource : NSObject <NSCopying> {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *E5ModelFileURL;
@property (nonatomic, readonly) NSURL *URL;

+ (Class)_classForModelAtURL:(id)arg1 error:(id*)arg2;
+ (bool)isModelSourceURL:(id)arg1;
+ (id)modelSourceFromURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)E5ModelFileURL;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithURL:(id)arg1;

@end
