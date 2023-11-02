
@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long  _dataType;
    NSDictionary * _dictionary;
    bool  _isIndirectArgumentBuffer;
    NSArray * _members;
    NSString * _typeName;
}

@property bool isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (unsigned long long)dataType;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)init;
- (id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2;
- (id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2 typeName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isIndirectArgumentBuffer;
- (bool)isStructLayoutThreadSafeWith:(id)arg1;
- (id)memberByName:(id)arg1;
- (id)members;
- (void)setIsIndirectArgumentBuffer:(bool)arg1;
- (void)setMembers:(id*)arg1 count:(unsigned long long)arg2;
- (id)typeName;

@end
