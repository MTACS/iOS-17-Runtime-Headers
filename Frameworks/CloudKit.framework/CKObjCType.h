
@interface CKObjCType : NSObject {
    NSString * _className;
    long long  _code;
    NSString * _encoding;
    unsigned long long  _flags;
    NSString * _name;
    unsigned long long  _size;
}

@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) unsigned long long size;

+ (id)typeForEncoding:(const char *)arg1;
+ (id)typeForValue:(id)arg1;

- (void).cxx_destruct;
- (id)className;
- (long long)code;
- (unsigned long long)size;

@end
