
@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _groupID;
    bool  _isUbiquitous;
    NSMutableArray * _uniqueIDs;
}

@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic) bool isUbiquitous;
@property (nonatomic, retain) NSMutableArray *uniqueIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToGroup:(id)arg1;
- (bool)isUbiquitous;
- (void)setGroupID:(id)arg1;
- (void)setIsUbiquitous:(bool)arg1;
- (void)setUniqueIDs:(id)arg1;
- (id)uniqueIDs;

@end
