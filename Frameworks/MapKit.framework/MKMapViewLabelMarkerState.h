
@interface MKMapViewLabelMarkerState : NSObject {
    unsigned char  _balloonBehavior;
    bool  _visible;
}

@property (nonatomic) unsigned char balloonBehavior;
@property (getter=isVisible, nonatomic) bool visible;

+ (id)stateForLabelMarker:(id)arg1;

- (unsigned char)balloonBehavior;
- (bool)isVisible;
- (void)setBalloonBehavior:(unsigned char)arg1;
- (void)setVisible:(bool)arg1;

@end
