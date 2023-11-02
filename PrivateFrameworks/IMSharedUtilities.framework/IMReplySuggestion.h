
@interface IMReplySuggestion : NSObject <NSCopying> {
    NSString * _attribution;
    NSString * _stringRepresentation;
    NSString * _text;
    long long  _tintColor;
    long long  _type;
}

@property (nonatomic, copy) NSString *attribution;
@property (nonatomic, copy) NSString *stringRepresentation;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic) long long tintColor;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)attribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithType:(long long)arg1 text:(id)arg2;
- (void)setAttribution:(id)arg1;
- (void)setStringRepresentation:(id)arg1;
- (void)setTintColor:(long long)arg1;
- (id)stringRepresentation;
- (id)text;
- (long long)tintColor;
- (long long)type;

@end
