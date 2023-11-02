
@interface RESectionPath : NSObject <NSCopying> {
    unsigned long long  _element;
    NSString * _sectionName;
}

@property (nonatomic) unsigned long long element;
@property (nonatomic, readonly, copy) NSString *sectionName;

+ (id)sectionPathWithSectionName:(id)arg1 element:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)element;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSectionName:(id)arg1 element:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)sectionName;
- (void)setElement:(unsigned long long)arg1;

@end
