
@interface PCXMPStringParser : NSObject <NSXMLParserDelegate> {
    NSMutableDictionary * mDict;
    NSArray * parentTags1;
    NSArray * parentTags2;
    NSArray * parentTags3;
    NSMutableDictionary * tagDict1;
    NSMutableDictionary * tagDict2;
    NSMutableDictionary * tagDict3;
    NSMutableString * tagParent1;
    NSMutableString * tagParent2;
    NSMutableString * tagParent3;
    NSMutableString * valueString;
    NSString * xmlError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (id)parseErrorString;
- (void)parseXMPData:(id)arg1;
- (void)parseXMPString:(id)arg1;
- (id)parsedData;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;

@end
