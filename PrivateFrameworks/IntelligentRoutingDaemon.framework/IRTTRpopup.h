
@interface IRTTRpopup : NSObject {
    NSString * _alternateButton;
    NSString * _defaultButton;
    bool  _dismissWillStop;
    NSString * _header;
    NSString * _key;
    NSString * _message;
    NSString * _otherButton;
    bool  _ttrWillOpen;
}

@property (nonatomic, retain) NSString *alternateButton;
@property (nonatomic, retain) NSString *defaultButton;
@property (nonatomic) bool dismissWillStop;
@property (nonatomic, retain) NSString *header;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *otherButton;
@property (nonatomic) bool ttrWillOpen;

- (void).cxx_destruct;
- (id)alternateButton;
- (id)defaultButton;
- (bool)dismissWillStop;
- (id)header;
- (id)initWithHeader:(id)arg1 key:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 otherButton:(id)arg5 alternateButton:(id)arg6 ttrWillOpen:(bool)arg7 dismissWillStop:(bool)arg8;
- (id)key;
- (id)message;
- (id)otherButton;
- (void)setAlternateButton:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setDismissWillStop:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOtherButton:(id)arg1;
- (void)setTtrWillOpen:(bool)arg1;
- (bool)ttrWillOpen;

@end
