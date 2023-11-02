
@interface TPSCollectionSection : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSArray * _collections;
    NSString * _identifier;
    NSString * _text;
}

@property (nonatomic, retain) NSArray *collections;
@property (getter=isFeatured, nonatomic, readonly) bool featured;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 collections:(id)arg2;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2 collections:(id)arg3;
- (bool)isFeatured;
- (void)removeCollection:(id)arg1;
- (void)setCollections:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
