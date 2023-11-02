
@interface RSPointLists : NSObject {
    NSMutableArray * _outerPointList_array;
    NSMutableArray * _pointLists_array;
    NSMutableArray * _wallLists_array;
}

- (void).cxx_destruct;
- (void)generateRSPointListsWithWalls:(id)arg1;
- (id)getRSOuterPointList;
- (id)getRSPointLists;
- (id)getRSWallLists;
- (id)init;

@end
