
@interface MXSessionSidekick : NSObject {
    int  mClientType;
    MXCoreSessionSidekick * mCoreSession;
    unsigned long long  mCoreSessionID;
    NSString * mDescription;
    unsigned long long  mID;
    bool  mIsPlaying;
}

+ (void)initialize;
+ (int)updateIsPlaying:(id)arg1;

- (int)activate;
- (id)copyProperties:(id)arg1 outPropertyErrors:(id*)arg2;
- (int)copyPropertyForKey:(id)arg1 valueOut:(id*)arg2;
- (int)deactivate:(bool)arg1 postInterruptionNotification:(bool)arg2;
- (void)dealloc;
- (void)dumpInfo;
- (int)getClientType;
- (id)getClientTypeAsString;
- (id)getCoreSession;
- (unsigned long long)getCoreSessionID;
- (unsigned long long)getID;
- (bool)getIsPlaying;
- (id)info;
- (id)initWithSession:(id)arg1;
- (int)setClientType:(int)arg1;
- (int)setID:(unsigned long long)arg1;
- (int)setIsPlaying:(bool)arg1;
- (int)setOrderedProperties:(id)arg1 usingErrorHandlingStrategy:(unsigned char)arg2 outPropertiesErrors:(id*)arg3;
- (int)setProperties:(id)arg1 usingErrorHandlingStrategy:(unsigned char)arg2 outPropertiesErrors:(id*)arg3;
- (int)setPropertyForKey:(id)arg1 value:(id)arg2;

@end
