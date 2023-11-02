
@interface VCDuplicationHandler : NSObject {
    bool  _allowDuplication;
    unsigned char  _duplicationReason;
    unsigned char  _duplicationState;
    bool  _forceDisableDuplication;
    bool  _iRATDuplicationEnabled;
    bool  _isRemotePreAzul;
    bool  _isUserMoving;
    struct { 
        bool isAlertEnabled; 
        unsigned char connectionWiFiCount; 
        unsigned char connectionCellCount; 
        bool isDuplicationDisabledDueToAlert; 
    }  _localAlertInfo;
    bool  _moreThanOneConnectionAvailable;
    struct { 
        bool isAlertEnabled; 
        unsigned char connectionWiFiCount; 
        unsigned char connectionCellCount; 
        bool isDuplicationDisabledDueToAlert; 
    }  _remoteAlertInfo;
}

@property bool allowDuplication;
@property bool iRATDuplicationEnabled;
@property (readonly) bool isDuplicationPending;
@property bool isRemotePreAzul;
@property bool isUserMoving;

- (bool)allowDuplication;
- (bool)iRATDuplicationEnabled;
- (id)init;
- (bool)isDuplicationPending;
- (bool)isRemotePreAzul;
- (bool)isUserMoving;
- (void)setAllowDuplication:(bool)arg1;
- (void)setIRATDuplicationEnabled:(bool)arg1;
- (void)setIsRemotePreAzul:(bool)arg1;
- (void)setIsUserMoving:(bool)arg1;

@end
