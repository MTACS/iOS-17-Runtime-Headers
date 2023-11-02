
@interface BlastDoorContactMessage_ContactInfo : NSObject {
    void contactMessage_ContactInfo;
}

@property (nonatomic, readonly) NSString *contactFormatterTitle;
@property (nonatomic, readonly) NSString *contactNameSubtitle;
@property (nonatomic, readonly) NSString *contactNameTitle;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *organizationNameSubtitle;
@property (nonatomic, readonly) NSString *organizationNameTitle;

- (void).cxx_destruct;
- (id)contactFormatterTitle;
- (id)contactNameSubtitle;
- (id)contactNameTitle;
- (id)description;
- (id)familyName;
- (id)givenName;
- (id)init;
- (id)organizationNameSubtitle;
- (id)organizationNameTitle;

@end
