
@interface FAScreentimeSettingsObjectCache : NSObject <NSSecureCoding> {
    NSDate * _date;
    id  _introductionModel;
    NSNumber * _memberDSID;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) id introductionModel;
@property (nonatomic, retain) NSNumber *memberDSID;

+ (Class)introductionModelClass;
+ (id)objectWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntroductionModel:(id)arg1 date:(id)arg2 dsid:(id)arg3;
- (id)introductionModel;
- (id)memberDSID;
- (void)setDate:(id)arg1;
- (void)setIntroductionModel:(id)arg1;
- (void)setMemberDSID:(id)arg1;

@end
