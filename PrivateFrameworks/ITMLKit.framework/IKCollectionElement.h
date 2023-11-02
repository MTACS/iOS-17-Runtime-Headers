
@interface IKCollectionElement : IKViewElement {
    IKAppBrowserBridge * _browserBridge;
    NSArray * _sections;
}

@property (nonatomic, readonly) IKAppBrowserBridge *browserBridge;
@property (nonatomic, readonly, retain) IKHeaderElement *header;
@property (nonatomic, readonly, retain) NSArray *sections;

+ (id)supportedFeaturesForElementName:(id)arg1;

- (void).cxx_destruct;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)browserBridge;
- (id)header;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)sections;

@end
