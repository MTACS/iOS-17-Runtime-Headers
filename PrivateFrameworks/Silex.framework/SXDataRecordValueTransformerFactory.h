
@interface SXDataRecordValueTransformerFactory : NSObject <SXDataRecordValueTransformerFactory> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)initWithDOMObjectProvider:(id)arg1;
- (id)recordValueTransformerForDataDescriptor:(id)arg1;

@end
