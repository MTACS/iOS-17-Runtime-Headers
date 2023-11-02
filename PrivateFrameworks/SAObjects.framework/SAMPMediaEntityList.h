
@interface SAMPMediaEntityList : SAAbstractItemList

@property (nonatomic) int mediaType;
@property (nonatomic, retain) SAMPCollection *parentCollection;

+ (id)mediaEntityList;
+ (id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (int)mediaType;
- (id)parentCollection;
- (void)setMediaType:(int)arg1;
- (void)setParentCollection:(id)arg1;

@end
