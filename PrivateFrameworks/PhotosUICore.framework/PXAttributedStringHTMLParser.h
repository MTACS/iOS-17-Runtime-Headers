
@interface PXAttributedStringHTMLParser : NSObject {
    NSDictionary * __currentAttributes;
    NSCountedSet * __currentMarkupElements;
    unsigned int  __currentTraits;
    NSDictionary * __defaultAttributes;
    NSString * __htmlString;
    NSDictionary * _emphasizedAttributes;
    NSDictionary * _italicizedAttributes;
    id /* block */  _parsedAttributedStringBlock;
    id /* block */  _parsedErrorBlock;
}

@property (setter=_setCurrentAttributes:, nonatomic, copy) NSDictionary *_currentAttributes;
@property (nonatomic, readonly) NSCountedSet *_currentMarkupElements;
@property (setter=_setCurrentTraits:, nonatomic) unsigned int _currentTraits;
@property (nonatomic, readonly, copy) NSDictionary *_defaultAttributes;
@property (nonatomic, readonly, copy) NSString *_htmlString;
@property (nonatomic, copy) NSDictionary *emphasizedAttributes;
@property (nonatomic, copy) NSDictionary *italicizedAttributes;
@property (nonatomic, copy) id /* block */ parsedAttributedStringBlock;
@property (nonatomic, copy) id /* block */ parsedErrorBlock;

+ (id)stringByConvertingToHTML:(id)arg1;

- (void).cxx_destruct;
- (id)_currentAttributes;
- (id)_currentMarkupElements;
- (unsigned int)_currentTraits;
- (id)_defaultAttributes;
- (id)_htmlString;
- (void)_setCurrentAttributes:(id)arg1;
- (void)_setCurrentTraits:(unsigned int)arg1;
- (void)_updateCurrentTraits;
- (id)emphasizedAttributes;
- (id)init;
- (id)initWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
- (id)italicizedAttributes;
- (void)parse;
- (id /* block */)parsedAttributedStringBlock;
- (id /* block */)parsedErrorBlock;
- (void)setEmphasizedAttributes:(id)arg1;
- (void)setItalicizedAttributes:(id)arg1;
- (void)setParsedAttributedStringBlock:(id /* block */)arg1;
- (void)setParsedErrorBlock:(id /* block */)arg1;

@end
