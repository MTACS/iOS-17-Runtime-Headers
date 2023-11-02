
@interface SFInfoTuple : NSObject <NSCopying, NSSecureCoding, SFInfoTuple> {
    struct { 
        unsigned int initiallyVisibleValues : 1; 
    }  _has;
    unsigned long long  _initiallyVisibleValues;
    NSString * _key;
    NSString * _showMoreString;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initiallyVisibleValues;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *showMoreString;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasInitiallyVisibleValues;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (unsigned long long)initiallyVisibleValues;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (void)setInitiallyVisibleValues:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setShowMoreString:(id)arg1;
- (void)setValues:(id)arg1;
- (id)showMoreString;
- (id)values;

@end
