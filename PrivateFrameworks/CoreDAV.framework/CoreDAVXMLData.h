
@interface CoreDAVXMLData : NSObject {
    CoreDAVXMLData_Impl * _dataImpl;
    bool  _docHasEnded;
    NSMutableArray * _elementStack;
    NSMutableDictionary * _seenURIsToDepth;
    NSMutableDictionary * _seenURIsToPrefixes;
    bool  _shouldAddFormattingSpaces;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic) bool shouldAddFormattingSpaces;

+ (bool)string:(id)arg1 isEqualToXmlCharString:(const char *)arg2;

- (void).cxx_destruct;
- (const char *)_prefixForNameSpace:(const char *)arg1;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(char *)arg4;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4;
- (id)data;
- (void)dealloc;
- (void)endElement:(id)arg1 inNamespace:(id)arg2;
- (id)init;
- (void)setShouldAddFormattingSpaces:(bool)arg1;
- (bool)shouldAddFormattingSpaces;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3;

@end
