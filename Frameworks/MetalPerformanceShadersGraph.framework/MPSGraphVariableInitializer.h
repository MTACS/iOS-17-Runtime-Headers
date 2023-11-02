
@interface MPSGraphVariableInitializer : MPSGraphObject {
    double  _constant;
    NSString * _file;
    unsigned int  _initializerType;
    double  _maximum;
    double  _minimum;
}

@property (nonatomic, readonly) unsigned int initializerType;

+ (id)initializerWithConstant:(double)arg1;
+ (id)initializerWithFile:(id)arg1;
+ (id)initializerWithOnes;
+ (id)initializerWithRandomUniformWithMinimum:(double)arg1 maximum:(double)arg2;
+ (id)initializerWithZeros;

- (void).cxx_destruct;
- (id)init;
- (id)initializedDataWithNumberOfValues:(unsigned long long)arg1 dataType:(unsigned int)arg2;
- (unsigned int)initializerType;

@end
