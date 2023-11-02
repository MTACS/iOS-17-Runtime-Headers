
@interface PXGShaderFunction : NSObject <NSCopying> {
    NSString * _assignmentVariable;
    bool  _isOpaque;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *assignmentVariable;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)shaderFunctionByName;
+ (id)shaderFunctions;

- (void).cxx_destruct;
- (id)assignmentVariable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 assignmentVariable:(id)arg2 isOpaque:(bool)arg3;
- (bool)isOpaque;
- (id)name;

@end
