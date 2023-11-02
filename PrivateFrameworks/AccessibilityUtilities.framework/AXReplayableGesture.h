
@interface AXReplayableGesture : NSObject <NSSecureCoding> {
    NSArray * _allEvents;
    bool  _arePointsDeviceRelative;
}

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (bool)supportsSecureCoding;
+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (bool)arePointsDeviceRelative;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x1; double x2; })pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (void)updateForLandscape:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction

- (void)_updateFinger:(id)arg1 withIdentifier:(id)arg2 atEventIndex:(unsigned long long)arg3;

@end
