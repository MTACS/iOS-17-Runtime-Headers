
@interface FaceTimeMessageStore.Message : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  callUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  conversationID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateCreated;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateModified;
    void duration;
    void from;
    void isRTT;
    void isRead;
    void isSensitive;
    void mailboxType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  messageFile;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  messageThumbnail;
    void messageType;
    void provider;
    void quality;
    void recipient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recordUUID;
    void sandboxMessageFile;
    void sandboxThumbnailFile;
    void sandboxTranscriptFile;
    void simID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  transcript;
    void transcriptionStatus;
    void voicemailID;
}

@property (nonatomic, readonly) NSString *description;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
