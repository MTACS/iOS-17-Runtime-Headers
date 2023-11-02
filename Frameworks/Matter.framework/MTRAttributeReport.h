
@interface MTRAttributeReport : NSObject {
    NSError * _error;
    MTRAttributePath * _path;
    id  _value;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) MTRAttributePath *path;
@property (nonatomic, readonly, copy) id value;

+ (void)initialize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)error;
- (id)initWithPath:(const void*)arg1 value:(id)arg2 error:(id)arg3;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)path;
- (id)value;

@end
