
@interface NMAPISectionResult : NSObject {
    NSArray * _itemsArray;
    NSDictionary * _sectionDictionary;
    NSString * _sectionIdentifier;
}

@property (nonatomic, readonly) NSArray *itemsArray;
@property (nonatomic, readonly) NSDictionary *sectionDictionary;
@property (nonatomic, readonly) NSString *sectionIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSectionIdentifier:(id)arg1 sectionDictionary:(id)arg2 itemsArray:(id)arg3;
- (id)itemsArray;
- (id)sectionDictionary;
- (id)sectionIdentifier;

@end
