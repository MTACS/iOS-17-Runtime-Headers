
@interface NTKFaceSnapshotCacheRequestOptions : NSObject {
    unsigned long long  _priority;
}

@property (nonatomic, readonly) unsigned long long priority;

- (id)initWithPriority:(unsigned long long)arg1;
- (id)ntk_asDictionaryOptions;
- (unsigned long long)priority;

@end
