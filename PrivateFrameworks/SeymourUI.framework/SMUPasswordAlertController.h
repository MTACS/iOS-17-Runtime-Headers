
@interface SMUPasswordAlertController : TVRAlertController {
    unsigned long long  _supportedOrientations;
}

@property (nonatomic) unsigned long long supportedOrientations;

- (void)setSupportedOrientations:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)supportedOrientations;

@end
