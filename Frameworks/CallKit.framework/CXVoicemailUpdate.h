
@interface CXVoicemailUpdate : NSObject <CXCopying, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSURL * _audioFileURL;
    NSDate * _dateReceived;
    struct CXVoicemailUpdateHasSet { 
        unsigned int sender : 1; 
        unsigned int dateReceived : 1; 
        unsigned int audioFileURL : 1; 
        unsigned int played : 1; 
        unsigned int trashed : 1; 
    }  _hasSet;
    bool  _played;
    CXHandle * _sender;
    bool  _trashed;
    NSUUID * _voicemailUUID;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSURL *audioFileURL;
@property (nonatomic, copy) NSDate *dateReceived;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CXVoicemailUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; } hasSet;
@property (readonly) unsigned long long hash;
@property (getter=isPlayed, nonatomic) bool played;
@property (nonatomic, copy) CXHandle *sender;
@property (readonly) Class superclass;
@property (getter=isTrashed, nonatomic) bool trashed;
@property (nonatomic, readonly, copy) NSUUID *voicemailUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)audioFileURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CXVoicemailUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; })hasSet;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoicemailUUID:(id)arg1;
- (bool)isPlayed;
- (bool)isTrashed;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sender;
- (void)setAudioFileURL:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setHasSet:(struct CXVoicemailUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; })arg1;
- (void)setPlayed:(bool)arg1;
- (void)setSender:(id)arg1;
- (void)setTrashed:(bool)arg1;
- (void)setUUID:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)voicemailUUID;

@end
