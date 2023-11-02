
@interface VTBuiltInRTModel : NSObject {
    NSDictionary * _builtInRTModelDictionary;
}

@property (retain) NSDictionary *builtInRTModelDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)builtInRTModelDictionary;
- (void)dealloc;
- (void)setBuiltInRTModelDictionary:(id)arg1;

@end
