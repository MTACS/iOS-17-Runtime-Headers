
@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSCopying, NSSecureCoding> {
    NSString * _deviceTypeHint;
    bool  _isPointerMove;
    double  _pointerAccelX;
    double  _pointerAccelY;
    double  _pointerAccelZ;
    double  _pointerButtonClickCount;
    double  _pointerButtonMask;
    double  _pointerButtonNumber;
    double  _pointerButtonPressure;
    bool  _pointerIsAbsolute;
    double  _pointerX;
    double  _pointerY;
    double  _pointerZ;
    AXEventRepresentation * _scrollEvent;
    AXEventRepresentation * _trackpadHandEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceTypeHint;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPointerMove;
@property (nonatomic) double pointerAccelX;
@property (nonatomic) double pointerAccelY;
@property (nonatomic) double pointerAccelZ;
@property (nonatomic) double pointerButtonClickCount;
@property (nonatomic) double pointerButtonMask;
@property (nonatomic) double pointerButtonNumber;
@property (nonatomic) double pointerButtonPressure;
@property (nonatomic) bool pointerIsAbsolute;
@property (nonatomic) double pointerX;
@property (nonatomic) double pointerY;
@property (nonatomic) double pointerZ;
@property (nonatomic, retain) AXEventRepresentation *scrollEvent;
@property (readonly) Class superclass;
@property (nonatomic, retain) AXEventRepresentation *trackpadHandEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityEventRepresentationTabularDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceTypeHint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPointerMove;
- (double)pointerAccelX;
- (double)pointerAccelY;
- (double)pointerAccelZ;
- (double)pointerButtonClickCount;
- (double)pointerButtonMask;
- (double)pointerButtonNumber;
- (double)pointerButtonPressure;
- (bool)pointerIsAbsolute;
- (double)pointerX;
- (double)pointerY;
- (double)pointerZ;
- (id)scrollEvent;
- (void)setDeviceTypeHint:(id)arg1;
- (void)setIsPointerMove:(bool)arg1;
- (void)setPointerAccelX:(double)arg1;
- (void)setPointerAccelY:(double)arg1;
- (void)setPointerAccelZ:(double)arg1;
- (void)setPointerButtonClickCount:(double)arg1;
- (void)setPointerButtonMask:(double)arg1;
- (void)setPointerButtonNumber:(double)arg1;
- (void)setPointerButtonPressure:(double)arg1;
- (void)setPointerIsAbsolute:(bool)arg1;
- (void)setPointerX:(double)arg1;
- (void)setPointerY:(double)arg1;
- (void)setPointerZ:(double)arg1;
- (void)setScrollEvent:(id)arg1;
- (void)setTrackpadHandEvent:(id)arg1;
- (id)trackpadHandEvent;

@end
