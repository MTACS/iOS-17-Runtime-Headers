
@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding> {
    NSString * _priorityAssetUUID;
    PSIQueryToken * _queryToken;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *priorityAssetUUID;
@property (nonatomic, readonly) PSIQueryToken *queryToken;
@property (nonatomic, readonly) NSString *title;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryForArchiving;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)priorityAssetUUID;
- (id)queryToken;
- (id)title;

@end
