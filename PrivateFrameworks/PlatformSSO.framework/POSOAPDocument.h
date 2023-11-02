
@interface POSOAPDocument : SOAPBaseDocument <POXSDefinitionProvider> {
    POSOAPEnvelope * _Envelope;
}

@property (nonatomic, retain) POSOAPEnvelope *Envelope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (void).cxx_destruct;
- (id)Envelope;
- (id)XMLStringWithOptions:(unsigned long long)arg1;
- (void)_XMLAttributeStringWithPrefix:(id)arg1 name:(id)arg2 value:(id)arg3 options:(unsigned long long)arg4 appendingToString:(id)arg5;
- (void)_XMLAttributesStringWithComplexType:(id)arg1 options:(unsigned long long)arg2 appendingToString:(id)arg3;
- (void)_XMLQualifiedNameForNamespace:(id)arg1 elementName:(id)arg2 options:(unsigned long long)arg3 appendingToString:(id)arg4;
- (void)_XMLStringWithComplexType:(id)arg1 options:(unsigned long long)arg2 appendingToString:(id)arg3;
- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)description;
- (void)setEnvelope:(id)arg1;

@end
