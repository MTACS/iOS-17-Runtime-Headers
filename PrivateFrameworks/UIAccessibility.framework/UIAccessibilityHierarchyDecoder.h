
@interface UIAccessibilityHierarchyDecoder : NSObject {
    NSData * _hierarchyData;
}

@property (nonatomic, retain) NSData *hierarchyData;

- (void).cxx_destruct;
- (id)decodeHierarchyWithContainer:(id)arg1 error:(id*)arg2;
- (id)hierarchyData;
- (id)initWithHierarchyData:(id)arg1;
- (void)setHierarchyData:(id)arg1;

@end
