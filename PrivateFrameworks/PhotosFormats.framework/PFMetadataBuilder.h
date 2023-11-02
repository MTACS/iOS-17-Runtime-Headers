
@interface PFMetadataBuilder : NSObject <PFMetadataBuilder> {
    NSString * _accessibilityDescription;
    NSString * _caption;
    NSDate * _creationDate;
    NSTimeZone * _creationTimeZone;
    NSArray * _keywords;
    CLLocation * _location;
    NSArray * _peopleNames;
    NSString * _title;
}

@property (nonatomic, copy) NSString *accessibilityDescription;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSTimeZone *creationTimeZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSArray *peopleNames;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)caption;
- (id)combinedKeywordsAndPeople;
- (id)creationDate;
- (id)creationTimeZone;
- (id)init;
- (id)keywords;
- (id)location;
- (id)peopleNames;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreationDate:(id)arg1 timeZone:(id)arg2;
- (void)setCreationTimeZone:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPeopleNames:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
