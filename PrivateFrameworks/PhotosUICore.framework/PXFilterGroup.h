
@interface PXFilterGroup : NSObject <NSCopying> {
    NSArray * _filterIdentifiers;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSArray *filterIdentifiers;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)groupWithName:(id)arg1 filterIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filterIdentifiers;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1 filterIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
