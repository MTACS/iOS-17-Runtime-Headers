
@interface IMStateCaptureAssistant : NSObject {
    unsigned long long  _handle;
}

@property (nonatomic) unsigned long long handle;

+ (unsigned long long)registerStateCaptureBlockWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3;

- (void)dealloc;
- (void)deregister;
- (unsigned long long)handle;
- (id)initWithObject:(id)arg1 title:(id)arg2 queue:(id)arg3;
- (void)setHandle:(unsigned long long)arg1;

@end
