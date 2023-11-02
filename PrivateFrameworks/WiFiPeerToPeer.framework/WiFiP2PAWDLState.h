
@interface WiFiP2PAWDLState : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _channelSequence;
    NSString * _interfaceName;
    bool  _isEnabled;
    WiFiMACAddress * _macAddress;
    WiFiChannel * _peerMasterChannel;
    WiFiChannel * _peerPrimaryPreferredChannel;
    WiFiChannel * _peerSecondaryPreferredChannel;
    unsigned int  _substate;
    bool  _supportsDataTransfer;
    bool  _supportsSoloMode;
}

@property (nonatomic, readonly) NSArray *channelSequence;
@property (nonatomic, readonly) NSString *interfaceName;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) WiFiMACAddress *macAddress;
@property (nonatomic, readonly) WiFiChannel *peerMasterChannel;
@property (nonatomic, readonly) WiFiChannel *peerPrimaryPreferredChannel;
@property (nonatomic, readonly) WiFiChannel *peerSecondaryPreferredChannel;
@property (nonatomic, readonly) unsigned int substate;
@property (nonatomic, readonly) bool supportsDataTransfer;
@property (nonatomic, readonly) bool supportsSoloMode;

+ (id)currentState;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelSequence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterfaceName:(id)arg1 supportsSoloMode:(bool)arg2 supportsDataTransfer:(bool)arg3 channelSequence:(id)arg4 isEnabled:(bool)arg5 substate:(unsigned int)arg6 macAddress:(id)arg7 peerMasterChannel:(id)arg8 peerPrimaryPreferredChannel:(id)arg9 peerSecondaryPreferredChannel:(id)arg10;
- (id)interfaceName;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (id)peerMasterChannel;
- (id)peerPrimaryPreferredChannel;
- (id)peerSecondaryPreferredChannel;
- (unsigned int)substate;
- (bool)supportsDataTransfer;
- (bool)supportsSoloMode;

@end
