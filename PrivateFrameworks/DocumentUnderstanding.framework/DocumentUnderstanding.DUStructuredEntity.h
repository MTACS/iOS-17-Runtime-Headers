
@interface DocumentUnderstanding.DUStructuredEntity : NSObject <NSCoding, NSCopying> {
    void addressComponents;
    void calendarEvent;
    void displayInfo;
    void email;
    void homeAutomationID;
    void labels;
    void phoneNumber;
    void responseDebugInfo;
    void title;
    void type;
    void url;
}

@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, retain) _TtC21DocumentUnderstanding15DUCalendarEvent *calendarEvent;
@property (nonatomic, retain) _TtC21DocumentUnderstanding13DUDisplayInfo *displayInfo;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *homeAutomationID;
@property (nonatomic, copy) NSArray *labels;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)addressComponents;
- (id)calendarEvent;
- (id)copyWithZone:(void*)arg1;
- (id)displayInfo;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)homeAutomationID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)labels;
- (id)phoneNumber;
- (id)responseDebugInfo;
- (void)setAddressComponents:(id)arg1;
- (void)setCalendarEvent:(id)arg1;
- (void)setDisplayInfo:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setHomeAutomationID:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)type;
- (id)url;

@end
