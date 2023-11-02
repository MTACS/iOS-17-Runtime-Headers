
@interface PKApplyActionContent : NSObject <NSCopying, PKApplyODIAttributesDictionaryProtocol> {
    NSArray * _actionItems;
    PKApplyFooterContent * _footerContent;
}

@property (nonatomic, readonly, copy) NSArray *actionItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKApplyFooterContent *footerContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionItems;
- (id)analyticsDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)footerContent;
- (id)initWithDictionary:(id)arg1;
- (id)odiAttributesDictionary;

@end
