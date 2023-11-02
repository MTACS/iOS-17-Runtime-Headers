
@interface KGSetWrapper : NSObject <NSCopying> {
    NSSet * _set;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSSet *set;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)set;

@end
