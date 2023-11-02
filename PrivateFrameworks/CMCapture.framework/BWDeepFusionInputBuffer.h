
@interface BWDeepFusionInputBuffer : NSObject {
    struct __CVBuffer { } * _buffer;
    struct __CVBuffer { } * _lscGainMap;
    NSDictionary * _lscGainMapParameters;
    NSDictionary * _metadata;
    unsigned long long  _type;
}

@property (nonatomic, readonly) struct __CVBuffer { }*buffer;
@property (nonatomic, readonly) struct __CVBuffer { }*lscGainMap;
@property (nonatomic, readonly) NSDictionary *lscGainMapParameters;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned long long type;

- (struct __CVBuffer { }*)buffer;
- (void)dealloc;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 type:(unsigned long long)arg2 metadata:(id)arg3 lscGainMap:(struct __CVBuffer { }*)arg4 lscGainMapParameters:(id)arg5;
- (struct __CVBuffer { }*)lscGainMap;
- (id)lscGainMapParameters;
- (id)metadata;
- (unsigned long long)type;

@end
