
@interface SXComponentDependencyResolver : NSObject {
    NSMutableArray * _componentNodes;
    NSDictionary * _mappedComponentNodes;
    NSArray * _solvedComponentNodes;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
