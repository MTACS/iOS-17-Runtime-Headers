
@interface TVRCKeyboardController : NSObject {
    TVRCKeyboardAttributes * _attributes;
    <TVRCKeyboardControllerDelegate> * _delegate;
    TVRCDevice * _device;
    bool  _editing;
    NSString * _text;
}

@property (nonatomic, readonly) TVRCKeyboardAttributes *attributes;
@property (nonatomic) <TVRCKeyboardControllerDelegate> *delegate;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)_initWithDevice:(id)arg1;
- (void)_setCurrentState:(id)arg1;
- (id)attributes;
- (id)delegate;
- (bool)isEditing;
- (void)sendReturnKey;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
