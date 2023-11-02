
@interface SPItemSharingDataIntegrity : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _memberCircles;
    NSArray * _ownedCircles;
}

@property (nonatomic, copy) NSArray *memberCircles;
@property (nonatomic, copy) NSArray *ownedCircles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnedCircles:(id)arg1 memberCircles:(id)arg2;
- (id)memberCircles;
- (id)ownedCircles;
- (void)setMemberCircles:(id)arg1;
- (void)setOwnedCircles:(id)arg1;

@end
