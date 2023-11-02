
@interface BPSWindowerInput : NSObject {
    id  _aggregate;
    <NSCopying> * _key;
    <BPSWindowMetadata> * _metadata;
}

@property (nonatomic, readonly) id aggregate;
@property (nonatomic, readonly) <NSCopying> *key;
@property (nonatomic, readonly) <BPSWindowMetadata> *metadata;

+ (id)new;

- (void).cxx_destruct;
- (id)aggregate;
- (id)init;
- (id)initWithAggregate:(id)arg1 key:(id)arg2 metadata:(id)arg3;
- (id)key;
- (id)metadata;

@end
