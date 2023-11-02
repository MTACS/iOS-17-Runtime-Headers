
@interface HSISPCapturePlugIn : NSObject {
    int (* _createFunction;
}

+ (id)defaultPlugIn;
+ (id)new;

- (id)device:(id*)arg1;
- (id)init;
- (id)initWithFactoryFunctionSymbol:(id)arg1 atPath:(id)arg2;

@end
