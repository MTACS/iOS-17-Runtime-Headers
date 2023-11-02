
@protocol ASCompetitionTemplateSourceDataProvider <NSObject>

@required

- (ASFriend *)friendWithUUID:(NSUUID *)arg1;
- (NSSet *)friends;

@end
