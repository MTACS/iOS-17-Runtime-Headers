
@interface PXSharedLibraryIncludedPeopleInfo : NSObject <NSCopying> {
    PXSharedLibraryUIParticipant * _participant;
    PHPerson * _person;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) PXSharedLibraryUIParticipant *participant;
@property (nonatomic, readonly) PHPerson *person;

+ (id)personForParticipant:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithParticipant:(id)arg1 person:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithParticipant:(id)arg1;
- (id)initWithParticipant:(id)arg1 person:(id)arg2;
- (id)initWithPerson:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nameComponents;
- (id)participant;
- (id)person;

@end
