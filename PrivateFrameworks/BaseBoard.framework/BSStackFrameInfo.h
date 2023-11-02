
@interface BSStackFrameInfo : NSObject {
    unsigned long long  _address;
    NSString * _className;
    NSString * _executablePath;
    NSString * _functionName;
    NSString * _realFunctionName;
}

@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) NSString *executableName;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) NSString *functionName;

- (void).cxx_destruct;
- (unsigned long long)address;
- (id)className;
- (id)description;
- (id)executableName;
- (id)executablePath;
- (id)functionName;

@end
