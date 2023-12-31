
@protocol TSWPFlowInfoContainer <NSObject, TSKDocumentObject, TSKModel>

@required

- (void)addFlowInfo:(id <TSWPFlowInfo>)arg1;
- (void)addFlowInfo:(id <TSWPFlowInfo>)arg1 dolcContext:(TSKAddedToDocumentContext *)arg2;
- (bool)containsFlowInfo:(id <TSWPFlowInfo>)arg1;
- (NSArray *)flowInfos;
- (unsigned long long)nextUserInterfaceIdentifier;
- (void)removeFlowInfo:(id <TSWPFlowInfo>)arg1;
- (void)setNextUserInterfaceIdentifier:(unsigned long long)arg1;

@end
