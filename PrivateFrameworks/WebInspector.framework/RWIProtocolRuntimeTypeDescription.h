
@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (nonatomic) bool isTruncated;
@property (nonatomic) bool isValid;
@property (nonatomic, copy) NSString *leastCommonAncestor;
@property (nonatomic, copy) NSArray *structures;
@property (nonatomic, retain) RWIProtocolRuntimeTypeSet *typeSet;

- (id)initWithIsValid:(bool)arg1;
- (bool)isTruncated;
- (bool)isValid;
- (id)leastCommonAncestor;
- (void)setIsTruncated:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setLeastCommonAncestor:(id)arg1;
- (void)setStructures:(id)arg1;
- (void)setTypeSet:(id)arg1;
- (id)structures;
- (id)typeSet;

@end
