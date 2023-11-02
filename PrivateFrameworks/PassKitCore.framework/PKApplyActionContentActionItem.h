
@interface PKApplyActionContentActionItem : NSObject <NSCopying, PKApplyODIAttributesDictionaryProtocol, PKIdentifiable> {
    NSString * _contextPrimaryActionIdentifier;
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSString *contextPrimaryActionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, readonly, copy) NSArray *items;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contextPrimaryActionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)items;
- (id)odiAttributesDictionary;

@end
