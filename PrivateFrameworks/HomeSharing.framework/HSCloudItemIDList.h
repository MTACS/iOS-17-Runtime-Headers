
@interface HSCloudItemIDList : NSObject <NSSecureCoding> {
    NSMutableArray * _idTypes;
    NSMutableArray * _itemIDs;
}

@property (nonatomic, readonly) unsigned long long count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCloudItemIDsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;

@end
