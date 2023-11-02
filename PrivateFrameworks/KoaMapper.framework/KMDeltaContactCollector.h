
@interface KMDeltaContactCollector : NSObject <CNChangeHistoryEventVisitor> {
    NSString * _contactIdentifier;
    unsigned char  _deltaType;
    bool  _dropEverything;
}

@property (nonatomic, retain) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned char deltaType;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dropEverything;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (unsigned char)deltaType;
- (bool)dropEverything;
- (id)init;
- (void)reset;
- (void)setContactIdentifier:(id)arg1;
- (void)setDeltaType:(unsigned char)arg1;
- (void)setDropEverything:(bool)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
