
@interface XREngineeringTypeDefinitions : NSObject <XRXMLParserDelegate> {
    id /* block */  _etypeDefHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (readonly) Class superclass;

+ (void)announceUsageOfEnumString:(id)arg1 context:(id)arg2;
+ (id)descriptionForImplClass:(unsigned char)arg1;
+ (id)implementationClassByEngineeringTypeMnemonic;
+ (bool)registerEngineeringTypes:(id)arg1;

- (void).cxx_destruct;
- (id)checksum;
- (void)enumerateEngineeringTypeDefs:(id /* block */)arg1;
- (id)lastModificationDate;
- (void)parser:(id)arg1 didFinishParsingElement:(id)arg2;

@end
