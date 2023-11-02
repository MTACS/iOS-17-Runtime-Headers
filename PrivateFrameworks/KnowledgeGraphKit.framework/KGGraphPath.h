
@interface KGGraphPath : NSObject {
    unsigned long long  _numberOfPaths;
    unsigned long long  _sourceNodeIdentifier;
    unsigned long long  _targetNodeIdentifier;
}

@property (nonatomic, readonly) unsigned long long numberOfPaths;
@property (nonatomic, readonly) unsigned long long sourceNodeIdentifier;
@property (nonatomic, readonly) unsigned long long targetNodeIdentifier;

- (id)description;
- (id)initWithSourceNodeIdentifier:(unsigned long long)arg1 targetNodeIdentifier:(unsigned long long)arg2 numberOfPaths:(unsigned long long)arg3;
- (unsigned long long)numberOfPaths;
- (unsigned long long)sourceNodeIdentifier;
- (unsigned long long)targetNodeIdentifier;

@end
