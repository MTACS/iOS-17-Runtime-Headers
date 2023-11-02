
@protocol WFCodableAttributeContentConvertible <NSObject>

@required

+ (Class)wf_contentItemClass;

- (WFContentItem *)wf_contentItemWithCodableAttribute:(INCodableAttribute *)arg1;

@end
