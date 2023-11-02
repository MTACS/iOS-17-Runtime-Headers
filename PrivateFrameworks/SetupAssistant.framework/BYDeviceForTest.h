
@interface BYDeviceForTest : BYDevice {
    bool  _hasSolidStateHomeButton;
    bool  _supportsTrueTone;
}

@property (nonatomic, readonly) bool hasSolidStateHomeButton;
@property (nonatomic, readonly) bool supportsTrueTone;

- (bool)hasSolidStateHomeButton;
- (id)init;
- (bool)supportsTrueTone;

@end
