
@interface ANAnnouncement : NSObject <ANCompanionMessage, ANDataMessage, NSSecureCoding> {
    unsigned long long  _action;
    ANParticipant * _announcer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cmStartTime;
    NSDate * _creationTimestamp;
    NSArray * _dataItems;
    int  _deviceClass;
    NSString * _filePath;
    NSString * _groupID;
    NSString * _identifier;
    NSArray * _listeners;
    ANLocation * _location;
    unsigned long long  _machStartTime;
    NSString * _messageVersion;
    NSDate * _playbackDeadline;
    int  _productType;
    unsigned long long  _productTypeOverride;
    NSDate * _receiptTimestamp;
    ANSender * _sender;
    unsigned long long  _source;
    unsigned long long  _statusFlags;
    NSString * _transcriptionText;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, retain) ANParticipant *announcer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cmStartTime;
@property (nonatomic, retain) NSDate *creationTimestamp;
@property (nonatomic, retain) NSArray *dataItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *defaultActionURL;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceClass;
@property (nonatomic, readonly) NSData *fileData;
@property (nonatomic, retain) NSString *filePath;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) bool hasPlayed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isRelayRequest;
@property (nonatomic, readonly) bool isRelayType;
@property (nonatomic, readonly) bool isRelayed;
@property (nonatomic, retain) NSArray *listeners;
@property (nonatomic, retain) ANLocation *location;
@property (nonatomic) unsigned long long machStartTime;
@property (nonatomic, retain) NSString *messageVersion;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, retain) NSDate *playbackDeadline;
@property (nonatomic) int productType;
@property (nonatomic) unsigned long long productTypeOverride;
@property (nonatomic, readonly) NSDate *receiptTimestamp;
@property (nonatomic, readonly) NSDictionary *remoteSessionDictionary;
@property (nonatomic, readonly) NSDictionary *sendFailureDictionary;
@property (nonatomic, retain) ANSender *sender;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long statusFlags;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *transcriptionText;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

+ (id)messageDataFromMessage:(id)arg1;
+ (id)messageFromData:(id)arg1 data:(id)arg2;
+ (id)messageWithoutDataFromMessage:(id)arg1;
+ (unsigned long long)sourceFromString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_generateGroupID;
- (id)_stringForAction:(unsigned long long)arg1;
- (id)_stringForDataType:(unsigned long long)arg1;
- (id)_uuidFromUUIDs:(id)arg1;
- (unsigned long long)action;
- (id)announcer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cmStartTime;
- (id)copy;
- (id)creationTimestamp;
- (id)dataItems;
- (id)description;
- (int)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)fileData;
- (id)filePath;
- (id)groupID;
- (bool)hasPlayed;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRelayRequest;
- (bool)isRelayType;
- (bool)isRelayed;
- (id)listeners;
- (id)location;
- (unsigned long long)machStartTime;
- (id)message;
- (id)messageForCompanion;
- (id)messageVersion;
- (id)metadata;
- (id)playbackDeadline;
- (void)processAudioTranscription:(id /* block */)arg1;
- (int)productType;
- (unsigned long long)productTypeOverride;
- (id)receiptTimestamp;
- (void)removeAudioFileDataItems;
- (id)sender;
- (void)setAction:(unsigned long long)arg1;
- (void)setAnnouncer:(id)arg1;
- (void)setCmStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCreationTimestamp:(id)arg1;
- (void)setDataItems:(id)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setFilePath:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMachStartTime:(unsigned long long)arg1;
- (void)setMessageVersion:(id)arg1;
- (void)setPlaybackDeadline:(id)arg1;
- (void)setProductType:(int)arg1;
- (void)setProductTypeOverride:(unsigned long long)arg1;
- (void)setSender:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setStatusFlags:(unsigned long long)arg1;
- (void)setTranscriptionText:(id)arg1;
- (unsigned long long)source;
- (unsigned long long)statusFlags;
- (id)transcriptionText;
- (bool)updateWithContentsOfAnnouncement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

+ (id)contextsFrom:(id)arg1;
+ (unsigned long long)defaultAudioEffects;
+ (void)uniqueAnnouncersInAnnouncements:(id)arg1 inHome:(id)arg2 withBlock:(id /* block */)arg3;

- (id)announcerNameInHome:(id)arg1;
- (id)defaultActionURL;
- (bool)isAnnouncerInSameRoomAsAccessory:(id)arg1;
- (bool)processAudioWithEffects:(unsigned long long)arg1 error:(id*)arg2;
- (id)remoteSessionDictionary;
- (id)sendFailureDictionary;

@end
