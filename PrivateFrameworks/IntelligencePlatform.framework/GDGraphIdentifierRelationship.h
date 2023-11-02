
@interface GDGraphIdentifierRelationship : NSObject <GDGraphObjectRelationship> {
    NSArray * _allHasProfileImage;
    NSArray * _allId;
    NSArray * _allType;
    NSString * _hasProfileImage;
    NSString * _id;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSArray *allHasProfileImage;
@property (nonatomic, readonly, copy) NSArray *allId;
@property (nonatomic, readonly, copy) NSArray *allType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) Class graphObjectType;
@property (nonatomic, readonly, copy) NSString *hasProfileImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *id;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)allHasProfileImage;
- (id)allId;
- (id)allType;
- (Class)graphObjectType;
- (id)hasProfileImage;
- (id)id;
- (id)initWithTypeField:(id)arg1 idField:(id)arg2 hasProfileImageField:(id)arg3 allTypeField:(id)arg4 allIdField:(id)arg5 allHasProfileImageField:(id)arg6;
- (id)type;

@end
