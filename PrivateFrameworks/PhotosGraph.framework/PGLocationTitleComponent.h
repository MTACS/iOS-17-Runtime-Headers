
@interface PGLocationTitleComponent : NSObject {
    NSMutableSet * _addressNodes;
    PGGraphEdge * _edge;
    PGGraphNode * _node;
    NSString * _personName;
    double  _timestampStart;
    unsigned long long  _type;
    double  _weight;
}

@property (nonatomic, retain) NSSet *addressNodes;
@property (nonatomic, retain) PGGraphEdge *edge;
@property (nonatomic, retain) PGGraphNode *node;
@property (nonatomic) NSString *personName;
@property (nonatomic, readonly) double timestampStart;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) double weight;

- (void).cxx_destruct;
- (void)addAddressNode:(id)arg1;
- (id)addressNodes;
- (bool)canMergeWithTitleComponent:(id)arg1;
- (id)edge;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)node;
- (id)personName;
- (void)setAddressNodes:(id)arg1;
- (void)setEdge:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setPersonName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (double)timestampStart;
- (unsigned long long)type;
- (void)updateWithMomentNodes:(id)arg1;
- (double)weight;

@end
