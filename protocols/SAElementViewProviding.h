
@protocol SAElementViewProviding <NSObject>

@required

- (<SAElement> *)element;

@optional

- (bool)_canShowWhileLocked;
- (bool)handleElementViewEvent:(long long)arg1;

@end
