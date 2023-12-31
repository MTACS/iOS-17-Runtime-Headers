
@interface WLMessage : NSObject {
    NSArray * _attachments;
    NSDate * _date;
    NSString * _dateString;
    bool  _isGroupMessage;
    unsigned long long  _messageDirection;
    NSString * _messageText;
    unsigned long long  _messageType;
    NSData * _mimeData;
    NSMutableArray * _mimeParts;
    NSArray * _recipients;
    WLMessageParty * _sender;
    WLMessageSMILContext * _smilContext;
    NSString * _subject;
    WLSourceDeviceRecordSummary * _summary;
    NSString * _threadID;
}

@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *dateString;
@property (nonatomic) bool isGroupMessage;
@property (nonatomic) unsigned long long messageDirection;
@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) unsigned long long messageType;
@property (nonatomic, readonly) NSData *mimeData;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) WLMessageParty *sender;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *threadID;

+ (id)_dateFormatterForMimeDateStrings;
+ (id)_fileNameForPart:(id)arg1 smilContext:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_populateMimeHeaders:(id)arg1 recipients:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 ofString:(id)arg4 addCountryCodeToParties:(bool)arg5 sqlController:(id)arg6;
+ (bool)_shouldIgnoreMessageThreadID;
+ (void)addRecipients:(id)arg1 toMimeHeaders:(id)arg2;
+ (id)dateFromMimeHeaders:(id)arg1;
+ (id)mimeHeadersFromMimeData:(id)arg1 sqlController:(id)arg2;
+ (id)recipientsFromMimeHeaders:(id)arg1;
+ (id)senderFromMimeHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)attachments;
- (id)date;
- (id)dateString;
- (bool)isGroupMessage;
- (unsigned long long)messageDirection;
- (id)messageText;
- (unsigned long long)messageType;
- (id)mimeData;
- (void)parseMIMEData:(id)arg1 sqlController:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 beganMimePart:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2;
- (void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2;
- (id)recipients;
- (id)sender;
- (void)setIsGroupMessage:(bool)arg1;
- (void)setMessageDirection:(unsigned long long)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)subject;
- (id)summary;
- (id)threadID;

@end
