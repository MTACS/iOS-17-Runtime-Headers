
@interface WBBookmarkLocation : NSObject <NSCopying, NSSecureCoding> {
    int  _parentID;
    WBSCRDTPosition * _position;
}

@property (nonatomic, readonly) int parentID;
@property (nonatomic, readonly, copy) WBSCRDTPosition *position;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentID:(int)arg1 position:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)locationWithParentID:(int)arg1;
- (id)locationWithPosition:(id)arg1;
- (int)parentID;
- (id)position;

@end
