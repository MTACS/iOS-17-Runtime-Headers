
@interface HoverTextServices.HoverTextService : NSObject {
    void serviceImpl;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)showAlert:(id)arg1;
- (bool)startHoverTextAndReturnError:(id*)arg1;
- (bool)stopHoverTextAndReturnError:(id*)arg1;

@end
