
@interface CCUIPPTTest : NSObject <NSCopying> {
    unsigned long long  _beginSignpost;
    unsigned long long  _endSignpost;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long beginSignpost;
@property (nonatomic, readonly) unsigned long long endSignpost;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)testWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3;
- (unsigned long long)beginSignpost;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)endSignpost;
- (id)name;

@end
