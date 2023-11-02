
@interface _OSLogDeserializedEventProxy : OSLogEventProxy {
    NSDictionary * _curEventDictionary;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _lossEndUnixDate;
    bool  _lossEndUnixDateNeedsLookup;
    struct timezone { 
        int tz_minuteswest; 
        int tz_dsttime; 
    }  _lossEndUnixTimeZone;
    bool  _lossEndUnixTimeZoneNeedsLookup;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _lossStartUnixDate;
    bool  _lossStartUnixDateNeedsLookup;
    struct timezone { 
        int tz_minuteswest; 
        int tz_dsttime; 
    }  _lossStartUnixTimeZone;
    bool  _lossStartUnixTimeZoneNeedsLookup;
    _OSLogEventSerializationMetadata * _metadata;
    bool  _needsTypeLookup;
    unsigned long long  _type;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _unixDate;
    bool  _unixDateNeedsLookup;
    struct timezone { 
        int tz_minuteswest; 
        int tz_dsttime; 
    }  _unixTimeZone;
    bool  _unixTimeZoneNeedsLookup;
}

@property (nonatomic, retain) NSDictionary *curEventDictionary;
@property (nonatomic, retain) _OSLogEventSerializationMetadata *metadata;
@property (nonatomic) bool needsTypeLookup;

- (void).cxx_destruct;
- (id)_frameForDict:(id)arg1;
- (void)_populate_timeval:(struct timeval { long long x1; int x2; }*)arg1 withDict:(id)arg2;
- (void)_populate_timezone:(struct timezone { int x1; int x2; }*)arg1 withDict:(id)arg2;
- (void)_resetNeedsLookup;
- (unsigned long long)activityIdentifier;
- (id)backtrace;
- (id)bootUUID;
- (id)category;
- (id)composedMessage;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (id)curEventDictionary;
- (id)date;
- (id)decomposedMessage;
- (id)formatString;
- (unsigned long long)logType;
- (struct { unsigned int x1; bool x2; })lossCount;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (struct timeval { long long x1; int x2; }*)lossEndUnixDate;
- (struct timezone { int x1; int x2; }*)lossEndUnixTimeZone;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (struct timeval { long long x1; int x2; }*)lossStartUnixDate;
- (struct timezone { int x1; int x2; }*)lossStartUnixTimeZone;
- (unsigned long long)machContinuousTimestamp;
- (id)metadata;
- (bool)needsTypeLookup;
- (unsigned long long)parentActivityIdentifier;
- (id)process;
- (int)processIdentifier;
- (id)processImagePath;
- (id)processImageUUID;
- (const char *)processImageUUIDBytes;
- (id)sender;
- (unsigned long long)senderImageOffset;
- (id)senderImagePath;
- (id)senderImageUUID;
- (const char *)senderImageUUIDBytes;
- (void)setCurEventDictionary:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNeedsTypeLookup:(bool)arg1;
- (unsigned long long)signpostIdentifier;
- (id)signpostName;
- (unsigned long long)signpostScope;
- (unsigned long long)signpostType;
- (unsigned long long)size;
- (id)subsystem;
- (unsigned long long)threadIdentifier;
- (unsigned long long)timeToLive;
- (id)timeZone;
- (unsigned long long)traceIdentifier;
- (unsigned long long)transitionActivityIdentifier;
- (unsigned long long)type;
- (struct timeval { long long x1; int x2; }*)unixDate;
- (struct timezone { int x1; int x2; }*)unixTimeZone;

@end
