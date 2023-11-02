
@interface SwiftUI.DisplayLink : NSObject {
    void currentThread;
    void currentUpdate;
    void host;
    void interval;
    void link;
    void nextThread;
    void nextUpdate;
    void reasons;
}

+ (void)asyncThreadWithArg:(id)arg1;

- (void).cxx_destruct;
- (void)displayLinkTimer:(id)arg1;
- (id)init;

@end
