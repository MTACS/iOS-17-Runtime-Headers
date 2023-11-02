
@protocol MALegacyNodeAndEdgeQueryProtocol <NSObject>

@required

- (MANode *)anyNodeForLabel:(NSString *)arg1;
- (MANode *)anyNodeForLabel:(NSString *)arg1 domain:(unsigned short)arg2;
- (MANode *)anyNodeForLabel:(NSString *)arg1 domain:(unsigned short)arg2 properties:(NSDictionary *)arg3;
- (unsigned long long)edgesCountForLabel:(NSString *)arg1;
- (unsigned long long)edgesCountForLabel:(NSString *)arg1 domain:(unsigned short)arg2;
- (unsigned long long)edgesCountForLabel:(NSString *)arg1 domain:(unsigned short)arg2 properties:(NSDictionary *)arg3;
- (NSIndexSet *)edgesDomains;
- (NSSet *)edgesForLabel:(NSString *)arg1;
- (NSSet *)edgesForLabel:(NSString *)arg1 domain:(unsigned short)arg2;
- (NSSet *)edgesForLabel:(NSString *)arg1 domain:(unsigned short)arg2 properties:(NSDictionary *)arg3;
- (NSSet *)edgesLabels;
- (bool)edgesStoreWeakReferencesToNodes;
- (void)enumerateEdgesInDomain:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, bool*, void*
- (void)enumerateEdgesWithLabel:(void *)arg1 domain:(void *)arg2 properties:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned short, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, bool*, void*
- (void)enumerateEdgesWithLabel:(void *)arg1 domain:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAEdge *, bool*, void*
- (void)enumerateNodesInDomain:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateNodesWithLabel:(void *)arg1 domain:(void *)arg2 properties:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned short, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (void)enumerateNodesWithLabel:(void *)arg1 domain:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MANode *, bool*, void*
- (unsigned long long)nodesCountForDomain:(unsigned short)arg1;
- (unsigned long long)nodesCountForLabel:(NSString *)arg1;
- (unsigned long long)nodesCountForLabel:(NSString *)arg1 domain:(unsigned short)arg2;
- (unsigned long long)nodesCountForLabel:(NSString *)arg1 domain:(unsigned short)arg2 properties:(NSDictionary *)arg3;
- (NSIndexSet *)nodesDomains;
- (NSSet *)nodesForDomain:(unsigned short)arg1;
- (NSSet *)nodesForDomain:(unsigned short)arg1 properties:(NSDictionary *)arg2;
- (NSSet *)nodesForLabel:(NSString *)arg1;
- (NSSet *)nodesForLabel:(NSString *)arg1 domain:(unsigned short)arg2;
- (NSSet *)nodesForLabel:(NSString *)arg1 domain:(unsigned short)arg2 properties:(NSDictionary *)arg3;
- (NSSet *)nodesLabels;

@end
