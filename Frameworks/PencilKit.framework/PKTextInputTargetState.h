
@interface PKTextInputTargetState : NSObject <NSCopying, PKTextInputDebugStateReporting> {
    NSString * _activePreviewText;
    NSNumber * _elementRecognitionIdentifier;
    PKTextInputHandwritingShot * _handwritingShot;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inProgressGestureInitialSelectedRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inProgressGestureRangeToDelete;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inProgressGestureSelectionRange;
    double  _inProgressGestureStartTimestamp;
    NSUUID * _inProgressGestureStrokeUUID;
    long long  _lastCommittedCharacterLevelPosition;
    CHTextInputQueryItem * _lastQueryItem;
    double  _lastUpdateTimestamp;
    bool  _nextCommitShouldHavePrecedingSeparator;
    long long  _sessionCommitLength;
    NSString * _uncommittedPendingText;
    NSNumber * _writingSessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)reportDebugStateDescription:(id /* block */)arg1;

@end
