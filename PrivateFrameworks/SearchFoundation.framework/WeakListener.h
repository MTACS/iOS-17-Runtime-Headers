
@interface WeakListener : NSObject {
    <SFFeedbackListener> * _weakListener;
}

@property (nonatomic, readonly) <SFFeedbackListener> *strongListener;

- (void).cxx_destruct;
- (id)initWithListener:(id)arg1;
- (id)strongListener;

@end
