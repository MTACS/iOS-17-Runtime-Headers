
@interface _UIEventSessionAction : NSObject <NSCopying> {
    long long  _actionCountFromMergedActions;
    long long  _actionType;
    long long  _hardwareKeyboardState;
    long long  _magicKeyboardState;
    long long  _sequenceNumber;
    NSNumber * _sessionID;
    long long  _source;
    long long  _uiInterfaceOrientation;
}

@property (nonatomic, readonly) long long actionCount;
@property (nonatomic) long long actionCountFromMergedActions;
@property (nonatomic) long long actionType;
@property (nonatomic, readonly) _UIEventSessionContextualAction *asContextualPress;
@property (nonatomic, readonly) _UIEventSessionHoverAction *asHover;
@property (nonatomic, readonly) _UIEventSessionKeyCommandAction *asKeyCommand;
@property (nonatomic, readonly) _UIEventSessionScrollAction *asScroll;
@property (nonatomic, readonly) _UIEventSessionTapAction *asTap;
@property (nonatomic, readonly) _UIEventSessionTextSelectionAction *asTextSelection;
@property (nonatomic, readonly) _UIEventSessionTouchAction *asTouch;
@property (nonatomic, readonly) _UIEventSessionTypingAction *asTyping;
@property (nonatomic) long long hardwareKeyboardState;
@property (nonatomic) long long magicKeyboardState;
@property (nonatomic, readonly) NSString *metadata;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic, retain) NSNumber *sessionID;
@property (nonatomic) long long source;
@property (nonatomic, readonly) NSString *typeEncoding;
@property (nonatomic) long long uiInterfaceOrientation;

+ (long long)getUIEventSourceForUITouchType:(long long)arg1;
+ (id)stringValueForActionType:(long long)arg1;
+ (id)stringValueForSource:(long long)arg1;

- (void).cxx_destruct;
- (long long)actionCount;
- (long long)actionCountFromMergedActions;
- (long long)actionType;
- (id)asContextualPress;
- (id)asHover;
- (id)asKeyCommand;
- (id)asScroll;
- (id)asTap;
- (id)asTextSelection;
- (id)asTouch;
- (id)asTyping;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)hardwareKeyboardState;
- (long long)magicKeyboardState;
- (long long)mergeActionIfPossible:(id)arg1;
- (id)metadata;
- (long long)sequenceNumber;
- (id)sessionID;
- (void)setActionCountFromMergedActions:(long long)arg1;
- (void)setActionType:(long long)arg1;
- (void)setHardwareKeyboardState:(long long)arg1;
- (void)setMagicKeyboardState:(long long)arg1;
- (void)setSequenceNumber:(long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setUiInterfaceOrientation:(long long)arg1;
- (long long)source;
- (id)typeEncoding;
- (long long)uiInterfaceOrientation;

@end
