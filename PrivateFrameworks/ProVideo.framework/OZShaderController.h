
@interface OZShaderController : NSObject {
    <MTLDevice> * _device;
    NSString * _fragmentFunctionName;
    NSRegularExpression * _functionRegex;
    <MTLLibrary> * _library;
    NSRegularExpression * _paramRegex;
    NSMutableArray * _parameters;
    NSString * _shader;
    NSURL * _url;
    NSString * _vertexFunctionName;
}

@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic, readonly) NSString *fragmentFunctionName;
@property (nonatomic, retain) NSRegularExpression *functionRegex;
@property (nonatomic, readonly) <MTLLibrary> *library;
@property (nonatomic, retain) NSRegularExpression *paramRegex;
@property (nonatomic, readonly) NSMutableArray *parameters;
@property (nonatomic, retain) NSString *shader;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *vertexFunctionName;

- (void)dealloc;
- (id)device;
- (id)fragmentFunctionName;
- (id)functionNameFromLine:(id)arg1;
- (id)functionRegex;
- (void)initRegex;
- (id)initWithURL:(id)arg1;
- (id)library;
- (void)loadShaderWithURL:(id)arg1;
- (id)paramRegex;
- (id)parameters;
- (id)preprocess:(id)arg1;
- (id)process:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setFunctionRegex:(id)arg1;
- (void)setParamRegex:(id)arg1;
- (void)setShader:(id)arg1;
- (id)shader;
- (id)url;
- (id)vertexFunctionName;

@end
