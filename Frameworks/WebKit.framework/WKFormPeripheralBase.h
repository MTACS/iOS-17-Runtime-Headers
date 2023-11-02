
@interface WKFormPeripheralBase : NSObject <WKFormPeripheral> {
    struct RetainPtr<NSObject<WKFormControl>> { 
        void *m_ptr; 
    }  _control;
    bool  _editing;
    bool  _singleTapShouldEndEditing;
    WKContentView * _view;
}

@property (nonatomic, readonly) NSObject<WKFormControl> *control;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic) bool singleTapShouldEndEditing;
@property (nonatomic, readonly) WKContentView *view;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)assistantView;
- (void)beginEditing;
- (id)control;
- (void)endEditing;
- (bool)handleKeyEvent:(id)arg1;
- (id)initWithView:(id)arg1 control:(void*)arg2;
- (bool)isEditing;
- (void)setSingleTapShouldEndEditing:(bool)arg1;
- (bool)singleTapShouldEndEditing;
- (id)view;

@end
