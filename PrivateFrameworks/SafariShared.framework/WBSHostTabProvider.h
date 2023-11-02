
@interface WBSHostTabProvider : NSObject {
    <WBSHostableTab> * _hostTab;
}

@property (nonatomic, retain) <WBSHostableTab> *hostTab;

- (void).cxx_destruct;
- (void)_setHostTab:(id)arg1;
- (id)hostTab;
- (void)setHostTab:(id)arg1;

@end
