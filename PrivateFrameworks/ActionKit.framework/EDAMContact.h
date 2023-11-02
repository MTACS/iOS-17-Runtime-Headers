
@interface EDAMContact : FATObject {
    NSString * _id;
    NSData * _messagingPermit;
    NSNumber * _messagingPermitExpires;
    NSString * _name;
    NSNumber * _photoLastUpdated;
    NSString * _photoUrl;
    NSNumber * _type;
}

@property (nonatomic, retain) NSString *id;
@property (nonatomic, retain) NSData *messagingPermit;
@property (nonatomic, retain) NSNumber *messagingPermitExpires;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *photoLastUpdated;
@property (nonatomic, retain) NSString *photoUrl;
@property (nonatomic, retain) NSNumber *type;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)id;
- (id)messagingPermit;
- (id)messagingPermitExpires;
- (id)name;
- (id)photoLastUpdated;
- (id)photoUrl;
- (void)setId:(id)arg1;
- (void)setMessagingPermit:(id)arg1;
- (void)setMessagingPermitExpires:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhotoLastUpdated:(id)arg1;
- (void)setPhotoUrl:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
