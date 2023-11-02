
@interface SXDOM : NSObject <NSCopying, NSMutableCopying> {
    SXDOMAnalysis * _analysis;
    <SXAutoPlacement> * _autoPlacement;
    NSDictionary * _componentLayouts;
    NSDictionary * _componentStyles;
    NSDictionary * _componentTextStyles;
    SXComponents * _components;
    <SXDocumentStyle> * _documentStyle;
    SXMetadata * _metadata;
    NSDictionary * _resources;
    NSDictionary * _textStyles;
}

@property (nonatomic, readonly, copy) SXDOMAnalysis *analysis;
@property (nonatomic, readonly) <SXAutoPlacement> *autoPlacement;
@property (nonatomic, readonly, copy) NSDictionary *componentLayouts;
@property (nonatomic, readonly, copy) NSDictionary *componentStyles;
@property (nonatomic, readonly, copy) NSDictionary *componentTextStyles;
@property (nonatomic, readonly, copy) SXComponents *components;
@property (nonatomic, readonly) <SXDocumentStyle> *documentStyle;
@property (nonatomic, readonly) SXMetadata *metadata;
@property (nonatomic, readonly, copy) NSDictionary *resources;
@property (nonatomic, readonly, copy) NSDictionary *textStyles;

- (void).cxx_destruct;
- (id)analysis;
- (id)autoPlacement;
- (id)componentLayouts;
- (id)componentStyles;
- (id)componentTextStyles;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)documentStyle;
- (id)init;
- (id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8 analysis:(id)arg9 metadata:(id)arg10;
- (id)metadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)resources;
- (id)textStyles;

@end
