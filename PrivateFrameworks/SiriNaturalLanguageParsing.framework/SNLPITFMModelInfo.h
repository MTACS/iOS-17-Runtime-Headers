
@interface SNLPITFMModelInfo : NSObject {
    NSString * _errorDomain;
    int  _loggingComponent;
    NSString * _loggingComponentString;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) int loggingComponent;
@property (nonatomic, readonly) NSString *loggingComponentString;
@property (nonatomic, readonly) unsigned long long type;

+ (id)stringForModelType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)errorDomain;
- (id)initWithType:(unsigned long long)arg1 loggingComponent:(int)arg2 errorDomain:(id)arg3;
- (int)loggingComponent;
- (id)loggingComponentString;
- (unsigned long long)type;

@end
