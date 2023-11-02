
@interface REScriptToken : NSObject <NSCopying> {
    long long  _column;
    long long  _line;
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) long long column;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) long long line;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (long long)column;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2 line:(long long)arg3 column:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (long long)line;
- (unsigned long long)type;
- (id)value;

@end
