
@interface PQLNameInjectionBase : NSData {
    char * _bytes;
    unsigned long long  _length;
}

@property (nonatomic, readonly) NSData *sql;

- (const void*)bytes;
- (void)dealloc;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;
- (id)sql;

@end
