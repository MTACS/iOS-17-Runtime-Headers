
@interface WFSerializableContentProvider : NSObject {
    NSMutableDictionary * _entriesForClassNames;
}

@property (nonatomic, readonly) NSMutableDictionary *entriesForClassNames;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (id)entriesForClassNames;
- (id)entryConsideringSuperclassesForClass:(Class)arg1;
- (id)init;
- (id)objectOfClass:(Class)arg1 withSerializedRepresentation:(id)arg2;
- (void)registerSerializableContentClasses;
- (id)serializedRepresentationForObject:(id)arg1;

@end
