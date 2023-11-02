
@interface CRKConcreteOutputDevice : NSObject <CRKOutputDevice> {
    AVOutputContext * _outputContext;
    AVOutputDevice * _outputDevice;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) AVOutputContext *outputContext;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;

+ (id)outputOptionsWithPassword:(id)arg1 suppressPrompt:(bool)arg2;

- (void).cxx_destruct;
- (void)displayToDeviceWithPassword:(id)arg1 suppressPrompt:(bool)arg2 completion:(id /* block */)arg3;
- (id)identifier;
- (id)initWithOutputDevice:(id)arg1 outputContext:(id)arg2;
- (id)outputContext;
- (id)outputDevice;

@end
