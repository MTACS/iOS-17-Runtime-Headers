
@interface NSFetchIndexElementDescription : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _collationType;
    NSFetchIndexDescription * _indexDescription;
    struct __indexElementDescriptionFlags { 
        unsigned int _ascending : 1; 
        unsigned int _propertyIsRetained : 1; 
        unsigned int _unique : 1; 
        unsigned int _reservedEntityDescription : 29; 
    }  _indexElementDescriptionFlags;
    NSPropertyDescription * _property;
    NSString * _propertyName;
}

@property (getter=isAscending) bool ascending;
@property unsigned long long collationType;
@property (nonatomic, readonly) NSFetchIndexDescription *indexDescription;
@property (readonly, retain) NSPropertyDescription *property;
@property (readonly, retain) NSString *propertyName;

+ (bool)supportsSecureCoding;

- (unsigned long long)collationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 collationType:(unsigned long long)arg2;
- (bool)isAscending;
- (bool)isEqual:(id)arg1;
- (id)property;
- (id)propertyName;
- (void)setAscending:(bool)arg1;
- (void)setCollationType:(unsigned long long)arg1;

@end
