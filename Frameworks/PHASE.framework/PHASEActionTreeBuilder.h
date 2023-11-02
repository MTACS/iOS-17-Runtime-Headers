
@interface PHASEActionTreeBuilder : NSObject {
    NSMutableSet * _mixNodes;
    unsigned int  _nextNodeId;
    NSMutableSet * _parameters;
    NSMutableArray * _rootNodes;
}

+ (id)getParamArray:(id)arg1 globalParamUIDs:(id)arg2 outError:(id*)arg3;

- (void).cxx_destruct;
- (bool)addParameter:(id)arg1;
- (bool)addRootNode:(id)arg1;
- (id)createParseableDictionaryWithUID:(id)arg1 rootNodes:(id)arg2 globalParamUIDs:(id)arg3 assetRegistry:(id)arg4 outError:(id*)arg5;
- (void)fillGeneratorNodeEntries:(id)arg1 dictionary:(id)arg2;
- (void)fillOutDirectivityFieldsWithParams:(id)arg1 dictionary:(id)arg2 isListener:(bool)arg3;
- (void)fillOutDistanceFieldsWithParams:(id)arg1 dictionary:(id)arg2;
- (id)generateNodeDictionary:(id)arg1 outError:(id*)arg2;
- (id)init;
- (bool)processNode:(id)arg1 withArray:(id)arg2 outError:(id*)arg3;

@end
