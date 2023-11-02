
@interface PSICachedGroup : NSObject <NSCopying> {
    unsigned long long  _category;
    unsigned long long  _groupId;
    NSString * _identifier;
    unsigned long long  _owningGroupId;
    NSString * _text;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic) unsigned long long groupId;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long owningGroupId;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)groupId;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)owningGroupId;
- (void)setGroupId:(unsigned long long)arg1;
- (id)text;

@end
