
@interface CRKURLResources : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _resources;
}

@property (getter=isDirectory, nonatomic, readonly) NSNumber *directory;
@property (nonatomic, readonly, copy) NSNumber *documentIdentifier;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly, copy) NSMutableDictionary *resources;
@property (nonatomic, readonly) unsigned long long size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentIdentifier;
- (id)immutableResources;
- (id)init;
- (id)initWithResources:(id)arg1;
- (id)isDirectory;
- (id)lastModificationDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableResources;
- (id)resources;
- (unsigned long long)size;
- (id)underlyingResources;

@end
