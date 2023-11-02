
@interface PLURIArrayWithHashes : NSObject {
    NSMutableArray * _attributeValues;
    struct __CFArray { } * _hashes;
    NSMutableArray * _relationshipValues;
    struct __CFArray { } * _uris;
}

@property (nonatomic, retain) NSMutableArray *attributeValues;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) struct __CFArray { }*hashes;
@property (nonatomic, readonly) bool isUpdate;
@property (nonatomic, retain) NSMutableArray *relationshipValues;
@property (nonatomic) struct __CFArray { }*uris;

- (void).cxx_destruct;
- (id)attributeValues;
- (unsigned long long)count;
- (id)description;
- (struct __CFArray { }*)hashes;
- (id)init;
- (id)initForUpdates:(bool)arg1;
- (bool)isUpdate;
- (id)relationshipValues;
- (void)setAttributeValues:(id)arg1;
- (void)setHashes:(struct __CFArray { }*)arg1;
- (void)setRelationshipValues:(id)arg1;
- (void)setUris:(struct __CFArray { }*)arg1;
- (struct __CFArray { }*)uris;

@end
