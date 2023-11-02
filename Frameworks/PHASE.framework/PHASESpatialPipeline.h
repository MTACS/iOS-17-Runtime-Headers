
@interface PHASESpatialPipeline : NSObject {
    NSDictionary * _entries;
    unsigned long long  _flags;
}

@property (readonly, copy) NSDictionary *entries;
@property (nonatomic, readonly) unsigned long long flags;

+ (bool)addToDictionary:(id)arg1 add:(bool)arg2 key:(id)arg3;
+ (id)new;

- (void).cxx_destruct;
- (id)entries;
- (unsigned long long)flags;
- (id)init;
- (id)initWithFlags:(unsigned long long)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end
