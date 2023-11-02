
@interface KGEdgeChangeRequest : NSObject {
    <KGEdge> * _edge;
    NSDictionary * _properties;
}

@property (nonatomic, readonly) <KGEdge> *edge;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (id)edge;
- (id)initWithEdge:(id)arg1 properties:(id)arg2;
- (id)properties;

@end
