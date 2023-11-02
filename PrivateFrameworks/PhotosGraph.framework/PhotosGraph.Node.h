
@interface PhotosGraph.Node : NSObject <KGNode> {
    void identifier;
    void labels;
    void properties;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, readonly) NSSet *labels;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3;
- (id)labels;
- (id)properties;
- (void)resolveIdentifier:(unsigned long long)arg1;
- (void)setIdentifier:(unsigned long long)arg1;

@end
