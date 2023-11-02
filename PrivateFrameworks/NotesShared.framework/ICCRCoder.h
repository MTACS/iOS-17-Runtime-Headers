
@interface ICCRCoder : NSObject {
    NSOrderedSet * _clusterTypeSet;
    void * _currentDocument;
    NSMutableOrderedSet * _encodedObjects;
}

@property (nonatomic, readonly) NSOrderedSet *clusterTypeSet;
@property (nonatomic) void*currentDocument;
@property (nonatomic, retain) NSMutableOrderedSet *encodedObjects;
@property (nonatomic, readonly) NSOrderedSet *typeSet;
@property (nonatomic, readonly) NSDictionary *typeToClassDict;

+ (void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(bool)arg3;
+ (void)registerCRClasses;
+ (void)registerClass:(Class)arg1 forType:(id)arg2;

- (void).cxx_destruct;
- (id)clusterTypeSet;
- (void*)currentDocument;
- (id)encodedObjects;
- (void)setCurrentDocument:(void*)arg1;
- (void)setEncodedObjects:(id)arg1;
- (unsigned long long)typeIndexForClass:(Class)arg1;
- (id)typeSet;
- (id)typeToClassDict;

@end
