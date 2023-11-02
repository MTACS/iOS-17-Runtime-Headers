
@interface DUStructuredEntityObjC : NSObject {
    NSArray * _labels;
    _TtC21DocumentUnderstanding18DUStructuredEntity * _underlying;
}

@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, copy) DUCalendarEventObjC *calendarEvent;
@property (nonatomic, copy) DUDisplayInfoObjC *displayInfo;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *homeAutomationID;
@property (nonatomic, copy) NSArray *labels;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) DUDebugInfoObjC *responseDebugInfo;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)addressComponents;
- (id)calendarEvent;
- (id)displayInfo;
- (id)email;
- (id)homeAutomationID;
- (id)init;
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
