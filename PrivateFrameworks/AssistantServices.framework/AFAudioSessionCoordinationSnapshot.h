
@interface AFAudioSessionCoordinationSnapshot : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSDateInterval * _currentOrUpNextDateInterval;
    bool  _isAudioSessionActive;
    NSArray * _localActiveAssertionContexts;
    AFAudioSessionCoordinationDeviceInfo * _localDevice;
    NSArray * _localPendingAssertionContexts;
    NSArray * _remoteActiveAssertionContexts;
    NSArray * _remoteDisqualifiedDevices;
    NSArray * _remotePendingAssertionContexts;
    NSArray * _remoteQualifiedInRangeDevices;
    NSArray * _remoteQualifiedOutOfRangeDevices;
}

@property (nonatomic, readonly, copy) NSDateInterval *currentOrUpNextDateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAudioSessionActive;
@property (nonatomic, readonly, copy) NSArray *localActiveAssertionContexts;
@property (nonatomic, readonly, copy) AFAudioSessionCoordinationDeviceInfo *localDevice;
@property (nonatomic, readonly, copy) NSArray *localPendingAssertionContexts;
@property (nonatomic, readonly, copy) NSArray *remoteActiveAssertionContexts;
@property (nonatomic, readonly, copy) NSArray *remoteDisqualifiedDevices;
@property (nonatomic, readonly, copy) NSArray *remotePendingAssertionContexts;
@property (nonatomic, readonly, copy) NSArray *remoteQualifiedInRangeDevices;
@property (nonatomic, readonly, copy) NSArray *remoteQualifiedOutOfRangeDevices;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentOrUpNextDateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentOrUpNextDateInterval:(id)arg1 isAudioSessionActive:(bool)arg2 localActiveAssertionContexts:(id)arg3 localPendingAssertionContexts:(id)arg4 remoteActiveAssertionContexts:(id)arg5 remotePendingAssertionContexts:(id)arg6 localDevice:(id)arg7 remoteQualifiedInRangeDevices:(id)arg8 remoteQualifiedOutOfRangeDevices:(id)arg9 remoteDisqualifiedDevices:(id)arg10;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isAudioSessionActive;
- (bool)isEqual:(id)arg1;
- (id)localActiveAssertionContexts;
- (id)localDevice;
- (id)localPendingAssertionContexts;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)remoteActiveAssertionContexts;
- (id)remoteDisqualifiedDevices;
- (id)remotePendingAssertionContexts;
- (id)remoteQualifiedInRangeDevices;
- (id)remoteQualifiedOutOfRangeDevices;

@end
