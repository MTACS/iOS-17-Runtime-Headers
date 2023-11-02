
@interface TSLocalDraftsDeviceManager : NSObject <TSLocalDraftsDeviceManagerType> {
    void delegate;
    void listener;
}

@property (nonatomic) <TSLocalDraftsDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
