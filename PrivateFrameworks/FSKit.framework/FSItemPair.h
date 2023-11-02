
@interface FSItemPair : NSObject <NSCopying> {
    NSObject * _first;
    NSObject * _second;
}

@property (readonly) NSObject *first;
@property (readonly) NSObject *second;

+ (id)newWith:(id)arg1 andObject:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)first;
- (unsigned long long)hash;
- (id)initWith:(id)arg1 andObject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)second;

@end
