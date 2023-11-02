
@interface KGSnapshotNode : NSObject <KGNode> {
    unsigned long long  _identifier;
    NSSet * _labels;
    NSDictionary * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSSet *labels;
@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 properties:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (id)properties;
- (void)resolveIdentifier:(unsigned long long)arg1;

@end
