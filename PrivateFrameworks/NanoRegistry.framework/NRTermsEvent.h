
@interface NRTermsEvent : NRPBTermsEvent <NSSecureCoding> {
    bool  _flaggedForSend;
    NSString * _termsDigest;
    bool  _writable;
}

@property (nonatomic) bool flaggedForSend;
@property (nonatomic, retain) NSString *termsDigest;
@property (nonatomic) bool writable;

+ (id)digestFromData:(id)arg1;
+ (id)eventWithProtobuf:(id)arg1;
+ (id)loadTermsWithPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setEventType:(unsigned long long)arg1;
- (void)_setLoggingProcessName:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)flaggedForSend;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(id)arg1;
- (bool)isTermsAlreadyArchived;
- (void)saveEventTextToFileIfNeeded;
- (void)saveTerms;
- (void)setAcknowledgedDeviceName:(id)arg1;
- (void)setAcknowledgedDeviceSerialNumber:(id)arg1;
- (void)setDisplayDeviceName:(id)arg1;
- (void)setDisplayDeviceSerialNumber:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (void)setEventDate:(double)arg1;
- (void)setEventType:(int)arg1;
- (void)setFlaggedForSend:(bool)arg1;
- (void)setLoggingProcessName:(id)arg1;
- (void)setPresentationLocation:(int)arg1;
- (void)setPresentationReason:(id)arg1;
- (void)setTermsDigest:(id)arg1;
- (void)setTermsText:(id)arg1;
- (void)setWritable:(bool)arg1;
- (id)termsDigest;
- (id)termsText;
- (void)updateEventDate;
- (bool)writable;

@end
