
@interface CARButtonInfo : NSObject {
    unsigned long long  _buttonLocation;
    unsigned long long  _buttonPressDuration;
    unsigned long long  _buttonType;
}

@property (nonatomic, readonly) unsigned long long buttonLocation;
@property (nonatomic, readonly) unsigned long long buttonPressDuration;
@property (nonatomic, readonly) unsigned long long buttonType;

- (unsigned long long)buttonLocation;
- (unsigned long long)buttonPressDuration;
- (unsigned long long)buttonType;
- (id)initWithButtonType:(unsigned long long)arg1 buttonLocation:(unsigned long long)arg2 buttonPressDuration:(unsigned long long)arg3;

@end
