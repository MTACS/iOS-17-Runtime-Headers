
@interface CXChannelUpdate : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    bool  _accessoryButtonEventsEnabled;
    CXParticipant * _activeRemoteParticipant;
    long long  _audioBluetoothFormat;
    NSString * _audioCategory;
    long long  _audioInterruptionOperationMode;
    long long  _audioInterruptionProvider;
    NSString * _audioMode;
    struct CXChannelUpdateHasSet { 
        unsigned int activeRemoteParticipant : 1; 
        unsigned int audioBluetoothFormat : 1; 
        unsigned int audioCategory : 1; 
        unsigned int audioInterruptionProvider : 1; 
        unsigned int audioInterruptionOperationMode : 1; 
        unsigned int audioMode : 1; 
        unsigned int name : 1; 
        unsigned int sandboxExtendedImageURL : 1; 
        unsigned int serviceStatus : 1; 
        unsigned int transmissionMode : 1; 
        unsigned int accessoryButtonEventsEnabled : 1; 
    }  _hasSet;
    NSString * _name;
    CXSandboxExtendedURL * _sandboxExtendedImageURL;
    long long  _serviceStatus;
    long long  _transmissionMode;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) bool accessoryButtonEventsEnabled;
@property (nonatomic, retain) CXParticipant *activeRemoteParticipant;
@property (nonatomic) long long audioBluetoothFormat;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic) long long audioInterruptionOperationMode;
@property (nonatomic) long long audioInterruptionProvider;
@property (nonatomic, copy) NSString *audioMode;
@property (nonatomic, readonly) struct CXChannelUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; } hasSet;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) CXSandboxExtendedURL *sandboxExtendedImageURL;
@property (nonatomic) long long serviceStatus;
@property (nonatomic) long long transmissionMode;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (bool)accessoryButtonEventsEnabled;
- (id)activeRemoteParticipant;
- (id)archivedDataWithError:(id*)arg1;
- (long long)audioBluetoothFormat;
- (id)audioCategory;
- (long long)audioInterruptionOperationMode;
- (long long)audioInterruptionProvider;
- (id)audioMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CXChannelUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; })hasSet;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)sandboxExtendedImageURL;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)serviceStatus;
- (void)setAccessoryButtonEventsEnabled:(bool)arg1;
- (void)setActiveRemoteParticipant:(id)arg1;
- (void)setAudioBluetoothFormat:(long long)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioInterruptionOperationMode:(long long)arg1;
- (void)setAudioInterruptionProvider:(long long)arg1;
- (void)setAudioMode:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSandboxExtendedImageURL:(id)arg1;
- (void)setServiceStatus:(long long)arg1;
- (void)setTransmissionMode:(long long)arg1;
- (long long)transmissionMode;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)updateWithUpdate:(id)arg1;

@end
