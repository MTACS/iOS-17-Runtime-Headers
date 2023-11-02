
@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel {
    NSString * _abbreviation;
    NSString * _fullName;
    bool  _isLocked;
    UIImage * _profileImage;
}

@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) UIImage *profileImage;

+ (id)lockedEntry;

- (void).cxx_destruct;
- (id)abbreviation;
- (id)fullName;
- (id)initWithFullName:(id)arg1 abbreviation:(id)arg2 profileImage:(id)arg3;
- (id)profileImage;
- (id)templateForComplicationFamily:(long long)arg1;

@end
