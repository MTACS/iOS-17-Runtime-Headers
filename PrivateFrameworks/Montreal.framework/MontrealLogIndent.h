
@interface MontrealLogIndent : NSObject {
    unsigned long long  _factor;
    NSString * _level;
    NSString * _step;
}

@property (readonly) unsigned long long factor;
@property (readonly) NSString *level;
@property (readonly) NSString *step;

+ (id)indentWithLevel:(id)arg1;
+ (id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)factor;
- (id)indentByFactor:(unsigned long long)arg1;
- (id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned long long)arg3;
- (id)level;
- (id)step;

@end
