
@interface VMMutableVoicemail : VMVoicemail

@property (nonatomic, retain) NSString *callbackDestinationID;
@property (nonatomic, retain) NSString *callbackISOCountryCode;
@property (nonatomic, retain) NSURL *dataURL;
@property (nonatomic, retain) NSDate *date;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long identifier;
@property (getter=isRead, nonatomic) bool read;
@property (nonatomic, retain) NSString *receiverDestinationID;
@property (nonatomic, retain) NSString *receiverISOCountryCode;
@property (nonatomic, retain) NSString *receiverLabelID;
@property (nonatomic) unsigned long long remoteUID;
@property (nonatomic, retain) NSString *senderDestinationID;
@property (nonatomic, retain) NSString *senderISOCountryCode;
@property (nonatomic, retain) NSURL *transcriptionURL;
@property (getter=isTrashed, nonatomic) bool trashed;
@property (nonatomic, retain) NSUUID *uuid;

@end
