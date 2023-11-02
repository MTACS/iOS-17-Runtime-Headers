
@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding> {
    NSString * _catalogID;
    NSDictionary * _dictionary;
    MPIdentifierSet * _identifiers;
    NSString * _itemID;
    NSString * _itemKind;
    bool  _libraryContent;
    NSString * _libraryID;
    NSString * _persistentID;
}

@property (nonatomic, readonly, copy) NSString *catalogID;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) MPIdentifierSet *identifiers;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly, copy) NSString *itemKind;
@property (getter=isLibraryContent, nonatomic, readonly) bool libraryContent;
@property (nonatomic, readonly, copy) NSString *libraryID;
@property (nonatomic, readonly, copy) NSString *persistentID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)catalogID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLibraryContent;
- (id)itemID;
- (id)itemKind;
- (id)libraryID;
- (id)persistentID;

@end
