
@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback {
    NSData * _modifiedPlacemarkData;
}

@property (nonatomic, retain) NSData *modifiedPlacemarkData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modifiedPlacemarkData;
- (void)setModifiedPlacemarkData:(id)arg1;

@end
