
@protocol PKFamilyMemberRowModel <NSObject>

@required

- (long long)accessoryType;
- (long long)cellStyle;
- (long long)compare:(id <PKFamilyMemberRowModel>)arg1;
- (NSString *)detailText;
- (PKFamilyMember *)familyMember;
- (UIImage *)image;
- (id)initWithFamilyMember:(PKFamilyMember *)arg1;
- (void)setImage:(UIImage *)arg1;
- (NSString *)titleText;

@end
