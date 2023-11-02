
@interface ViewControllerBackOption : NSObject {
    bool  _hidesBackButton;
    NSArray * _leftBarButtonItems;
}

@property bool hidesBackButton;
@property (retain) NSArray *leftBarButtonItems;

- (void).cxx_destruct;
- (bool)hidesBackButton;
- (id)leftBarButtonItems;
- (void)setHidesBackButton:(bool)arg1;
- (void)setLeftBarButtonItems:(id)arg1;

@end
