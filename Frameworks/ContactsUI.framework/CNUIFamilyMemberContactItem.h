
@interface CNUIFamilyMemberContactItem : NSObject <NSCopying> {
    NSString * _contactIdentifier;
    NSString * _detailLabel;
    NSString * _label;
    bool  _unreachable;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *label;
@property (getter=isUnreachable, nonatomic, readonly) bool unreachable;

+ (id)familyMemberContactItemFromCoreFamilyMemberContactItem:(id)arg1;
+ (id)typeLabelStringFromContactType:(long long)arg1;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailLabel;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContactIdentifier:(id)arg1 label:(id)arg2 detailLabel:(id)arg3 unreachable:(bool)arg4;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 detailLabel:(id)arg2 unreachable:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUnreachable;
- (id)label;

@end
