
@interface SRUIFDataStore : NSObject {
    NSMutableDictionary * _entries;
}

- (void).cxx_destruct;
- (id)imageDataForKey:(id)arg1;
- (id)init;
- (id)initWithEntries:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (void)setImageData:(id)arg1 forKey:(id)arg2;

@end
