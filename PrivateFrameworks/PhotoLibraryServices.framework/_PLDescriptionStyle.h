
@interface _PLDescriptionStyle : NSObject {
    long long  _extraIndent;
    NSString * _fieldSeparator;
    NSString * _initialFieldSeparator;
    NSString * _nameValueSeparator;
    bool  _prettyPrint;
    NSString * _suffix;
}

@property (readonly) long long extraIndent;
@property (readonly, copy) NSString *fieldSeparator;
@property (readonly, copy) NSString *initialFieldSeparator;
@property (readonly, copy) NSString *nameValueSeparator;
@property (readonly) bool prettyPrint;
@property (readonly, copy) NSString *suffix;

+ (id)styleForEnum:(long long)arg1;

- (void).cxx_destruct;
- (id)descriptionForObject:(id)arg1 withIndent:(long long)arg2;
- (long long)extraIndent;
- (id)fieldSeparator;
- (id)initWithIntialFieldSeparator:(id)arg1 fieldSeparator:(id)arg2 nameValueSeparator:(id)arg3 suffix:(id)arg4 extraIndent:(long long)arg5 prettyPrint:(bool)arg6;
- (id)initialFieldSeparator;
- (id)nameValueSeparator;
- (bool)prettyPrint;
- (id)suffix;

@end
