
@interface ETLayerInitializationParameters : NSObject {
    NSDictionary * _parameters;
}

@property (readonly) NSDictionary *parameters;

- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)parameters;

@end
