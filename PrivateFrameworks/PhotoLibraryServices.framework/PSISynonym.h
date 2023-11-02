
@interface PSISynonym : NSObject <NSCopying, PSISearchableTerm> {
    unsigned long long  _category;
    NSString * _identifier;
    unsigned long long  _owningGroupId;
    NSString * _text;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long owningGroupId;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithText:(id)arg1 category:(unsigned long long)arg2 owningGroupId:(unsigned long long)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)owningGroupId;
- (id)text;

@end
