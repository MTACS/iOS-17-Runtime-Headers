
@interface IDSServerBagLoadedContents : NSObject <NSCopying> {
    NSDictionary * _dictionary;
    IDSServerBagRawContents * _rawContents;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) IDSServerBagRawContents *rawContents;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1 rawContents:(id)arg2;
- (id)rawContents;

@end
