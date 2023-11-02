
@protocol PBUIPosterComponentDelegate

@required

- (void)posterComponent:(id <PBUIPosterComponent>)arg1 didUpdateHideDimmingLayer:(bool)arg2;
- (void)posterComponent:(id <PBUIPosterComponent>)arg1 didUpdateLegibilitySettings:(_UILegibilitySettings *)arg2;

@end
