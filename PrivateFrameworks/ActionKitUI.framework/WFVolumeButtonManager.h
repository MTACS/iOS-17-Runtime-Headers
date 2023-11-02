
@interface WFVolumeButtonManager : NSObject {
    id /* block */  _pressHandler;
}

@property (nonatomic, copy) id /* block */ pressHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPressHandler:(id /* block */)arg1;
- (id /* block */)pressHandler;
- (void)setPressHandler:(id /* block */)arg1;
- (void)volumeButtonPressed;

@end
