
@interface AXKonaConfiguration : NSObject {
    NSString * _dialectCode;
    NSString * _dylib;
    int  _eciDialect;
}

@property (nonatomic, readonly) NSString *dialectCode;
@property (nonatomic, readonly) NSString *dylib;
@property (nonatomic, readonly) int eciDialect;
@property (nonatomic, readonly) NSString *iniString;

- (void).cxx_destruct;
- (id)dialectCode;
- (id)dylib;
- (int)eciDialect;
- (id)iniString;
- (id)initWithDylib:(id)arg1 dialectCode:(id)arg2 dialect:(int)arg3;

@end
